#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow_Init();
    Set_Slots();
    Port_Scan();
    Qwt_Init();
}

MainWindow::~MainWindow()
{
    delete Grid;
    delete QwtTimer;
    for(int i=0;i<6;i++)
    {
        delete Curve[i];
    }
    delete ui;
}

void MainWindow::Set_Slots()
{
    QObject::connect(ui->AboutQTButton,SIGNAL(clicked()),qApp,SLOT(aboutQt()));//关于Qt槽
    QObject::connect(ui->AboutButton,SIGNAL(clicked()),this,SLOT(About_Slot()));//关于界面槽
    QObject::connect(ui->PowerButton,SIGNAL(clicked()),this,SLOT(Port_Init()));//打开串口槽
    QObject::connect(ui->CleanButton,SIGNAL(clicked()),ui->ReceiveArea,SLOT(clear()));//清空接收区槽
    QObject::connect(ui->SaveFileButton,SIGNAL(clicked(bool)),this,SLOT(SaveFile_Slot()));//保存串口助手值槽
    QObject::connect(ui->SendFileButton,SIGNAL(clicked()),this,SLOT(OpenFile_Slot()));//从文件发送槽
    QObject::connect(ui->SendButton,SIGNAL(clicked(bool)),this,SLOT(SendFile_Slot()));//串口发送槽
    QObject::connect(this->QwtTimer,SIGNAL(timeout()),this,SLOT(QwtTime_Slot()));//qt定时器槽
    QObject::connect(ui->QwtCleanButton,SIGNAL(clicked(bool)),this,SLOT(QwtClean_Slot()));//清空Qwt槽
}

void MainWindow::MainWindow_Init()
{
    this->setMinimumSize(1018,696);
    this->setMaximumSize(1018,696);
    this->setWindowTitle("718 Innovation Lab");

    ui->SendCleanBox->setChecked(true);
    ui->ReceiveArea->setReadOnly(true);

    ui->QwtDataBox->setCurrentIndex(1);


    this->QwtTimer->start(50);
}

void MainWindow::Port_Scan()
{
    QList<QSerialPortInfo>  infos;
    infos.clear();
    infos=QSerialPortInfo::availablePorts();

       if(infos.isEmpty())
       {
           ui->COMBox->addItem("无串口");
           ui->SendButton->setEnabled(false);
           ui->PowerButton->setEnabled(false);
           return;
       }
       foreach (QSerialPortInfo info, infos) //抄的没看懂
       {
           ui->COMBox->addItem(info.portName());
       }
}

void MainWindow::About_Slot()
{
   aboutwindow about;
   about.show();
   about.exec();
}

void MainWindow::Port_Init()
{
    if(ui->PowerButton->text()==tr("打开串口"))
        {
            ui->PowerButton->setEnabled(false);

            Port.setPortName(ui->COMBox->currentText());
            Port.open(QIODevice::ReadWrite);
            Port.setBaudRate(ui->SpeedBox->currentText().toInt());  //设置波特率
            switch(ui->DataBox->currentIndex())                     //设置数据位
            {
                case 8:
                    Port.setDataBits(QSerialPort::Data8);
                    break;
                case 7:
                    Port.setDataBits(QSerialPort::Data7);
                    break;
                case 6:
                    Port.setDataBits(QSerialPort::Data6);
                    break;
                case 5:
                    Port.setDataBits(QSerialPort::Data5);
                    break;
            }

            switch(ui->StopBox->currentIndex())                     //设置停止位
            {
                case 1:
                    Port.setStopBits(QSerialPort::OneStop);
                    break;
                case 2:
                    Port.setStopBits(QSerialPort::TwoStop);
                    break;
            }

            switch(ui->CheckBox->currentIndex())                    //设置效验位
            {
                case 0:
                    Port.setParity(QSerialPort::NoParity);
                case 1:
                    Port.setParity(QSerialPort::OddParity);
                case 2:
                    Port.setParity(QSerialPort::EvenParity);
            }

            ui->COMBox->setEnabled(false);                          //禁用按钮
            ui->DataBox->setEnabled(false);
            ui->SpeedBox->setEnabled(false);
            ui->StopBox->setEnabled(false);
            ui->CheckBox->setEnabled(false);

            ui->PowerButton->setText(tr("关闭串口"));               //设置开关键
            ui->PowerButton->setEnabled(true);
            ui->ReceiveArea->clear();
            ui->SendArea->clear();

            QObject::connect(&Port, &QSerialPort::readyRead, this, &MainWindow::Receive_Slot);//这句不太懂
        }

    else
        {

            ui->COMBox->setEnabled(true);                          //启用按钮
            ui->DataBox->setEnabled(true);
            ui->SpeedBox->setEnabled(true);
            ui->StopBox->setEnabled(true);
            ui->CheckBox->setEnabled(true);

            Port.clear();                                           //关闭并删除串口
            Port.close();
            //Port.deleteLater();//这句有问题？？？
            ui->PowerButton->setText("打开串口");
        }
}

void MainWindow::SaveFile_Slot()
{
    QString FileName=QFileDialog::getSaveFileName(this,tr("Save As"),QDir::currentPath(),tr("*.txt"));
    QFile *file=new QFile;
        file->setFileName(FileName);
        bool ok=file->open(QIODevice::ReadWrite);//设置打开方式
        if(ok==true)
        {
            QTextStream out(file);
            out<<ui->ReceiveArea->toPlainText();//转换为纯文本
            file->close();
            delete file;
        }
}

void MainWindow::OpenFile_Slot()
{
    QString FileName=QFileDialog::getOpenFileName(this, tr("Open File"),QDir::currentPath(),tr("*.txt"));
    QFile *file=new QFile;//打开文件，用文件指针，和C语言基本相同
        file->setFileName(FileName);//传入地址
        bool ok=file->open(QIODevice::ReadWrite);//设置打开方式
        if(ok==true)
        {
            QTextStream in(file);
            ui->SendArea->setText(in.readAll());//载入到图形
            file->close();
            delete file;
        }
}

void MainWindow::SendFile_Slot()
{
    if(ui->PowerButton->text()==tr("打开串口"))
        {
        QMessageBox::information(this,tr("718 Lab"),"串口未打开",QMessageBox::Ok);
        return;
        }
    Port.write(ui->SendArea->toPlainText().toLatin1());
    ui->ReceiveArea->append("上位机:"+ui->SendArea->toPlainText()+"\n");
    if(ui->SendCleanBox->isChecked())
    {
        ui->SendArea->clear();
    }
}

void MainWindow::PortReceive_Slot()
{
    //是否存在一直接收数据无法显示的情况？
        if(!ui->HEXCheckBox->isChecked())
        {
            QByteArray buf;
            buf =Port.readAll();
            QString str = ui->ReceiveArea->toPlainText();
            str+="下位机:"+tr(buf)+"\n";
            ui->ReceiveArea->clear();
            ui->ReceiveArea->append(str);
            buf.clear();
        }
        else
        {
            QByteArray buf;
            buf =Port.readAll();
            QString str = ui->ReceiveArea->toPlainText();
            str+="下位机:"+tr(buf.toHex())+"\n";
            ui->ReceiveArea->clear();
            ui->ReceiveArea->append(str);
            buf.clear();
        }
}

void MainWindow::Receive_Slot()
{
    if(0==ui->tabWidget->currentIndex())
    {
        this->PortReceive_Slot();
    }
    else if(1==ui->tabWidget->currentIndex())
    {
        this->QwtReceive_Slot();
    }
}
//qwt部分*******************************************

void MainWindow::Qwt_Init()
{
    ui->Plot->enableAxis(QwtPlot::xTop,false);
    ui->Plot->enableAxis(QwtPlot::xBottom,true);
    ui->Plot->enableAxis(QwtPlot::yLeft,true);
    ui->Plot->enableAxis(QwtPlot::yRight,false);
    ui->Plot->setAxisAutoScale(QwtPlot::yLeft,true);
    ui->Plot->setAxisAutoScale(QwtPlot::xBottom,true);

    QwtPlotMagnifier Magnifer(ui->Plot->canvas());//设置鼠标滚动
    QwtPlotPanner Panner(ui->Plot->canvas());

    for(char i=0;i<6;i++)
    {
        this->Curve[i]=new QwtPlotCurve;
        this->Curve[i]->attach(ui->Plot);
        this->Curve[i]->setStyle(QwtPlotCurve::Lines);//直线形式
        this->Curve[i]->setCurveAttribute(QwtPlotCurve::Fitted,true);//是曲线更光滑
    }
    this->Curve[0]->setPen(Qt::darkBlue);
    this->Curve[1]->setPen(Qt::blue);
    this->Curve[2]->setPen(Qt::green);
    this->Curve[3]->setPen(Qt::yellow);
    this->Curve[4]->setPen(Qt::darkYellow);
    this->Curve[5]->setPen(Qt::red);

    this->Grid->setMajorPen(Qt::gray,0,Qt::DotLine);
    this->Grid->setMinorPen(Qt::gray,0,Qt::DotLine);
    this->Grid->enableX(true);
    this->Grid->enableY(true);
    this->Grid->enableYMin(true);
    this->Grid->enableXMin(false);
    this->Grid->attach(ui->Plot);

    ui->Plot->setAxisScale(QwtPlot::yLeft,-1000,1000);
    ui->Plot->setAxisScale(QwtPlot::xBottom,0,25);



   /* for (double x = 0; x < 2.0 * M_PI; x+=(M_PI / 10.0))
        {
            yData[0].append(qSin(x));
            xData.append(x);
        }

    this->Curve[0]->setSamples(xData,yData[0]);
    ui->Plot->show();*/
}

void MainWindow::QwtReceive_Slot()
{
    int number=this->QwtCurrentNumber();
    //采用山外发送协议，具体协议内容查看山外例程http://vcan123.com/forum.php?mod=viewthread&tid=6253&ctid=27
    switch (ui->QwtDataBox->currentIndex())
    {
    case 0:
        if(ui->QwtSignedBox->isChecked())
        {
            char data[6*2+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append((char)i+2+j);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }

            }
        }
        else
        {
            char data[6*2+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append(i+2+j);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }

            }
        }
        break;
    case 1:
        if(ui->QwtSignedBox->isChecked())
        {
            char data[6*2*2+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append((char)data[i+2+j+1]<<8|data[i+2+j]);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }
            }
        }
        else
        {
            unsigned char data[6*2*2+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append(data[i+2+j+1]<<8|data[i+2+j]);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }
            }
        }
        break;
    case 2:
        if(ui->QwtSignedBox->isChecked())
        {

            char data[6*2*4+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append((char)data[i+2+j+3]<<24|data[i+2+j+2]<<16|data[i+2+j+1]<<8|data[i+2+j]);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }
            }
        }
        else
        {
            unsigned char data[6*2*4+8];
            this->Port.read((char*)data,number*2+8);
            if(Port.bytesAvailable()>=number*2+8)
            {
                for(int i=0;i<number+4;i++)
                {
                    if(data[i]==0x03&&data[i+1]==0xfc&&data[i+2+4*number]==0xfc&&data[i+3+4*number]==0x03)
                    {
                        for(int j=0;j<number;j++)
                        {
                            yData[j].append(data[i+2+j+3]<<24|data[i+2+j+2]<<16|data[i+2+j+1]<<8|data[i+2+j]);
                        }
                        xData.append(Timei*20);
                        break;
                    }
                }
            }
        }
        break;
    }

    if(ui->Qwt1Button->isChecked())//设置显示的线
    {
        this->Curve[0]->setSamples(xData,yData[0]);
    }
    if(ui->Qwt2Button->isChecked())
    {
        this->Curve[1]->setSamples(xData,yData[1]);
    }
    if(ui->Qwt3Button->isChecked())
    {
        this->Curve[2]->setSamples(xData,yData[2]);
    }
    if(ui->Qwt4Button->isChecked())
    {
        this->Curve[3]->setSamples(xData,yData[3]);
    }
    if(ui->Qwt5Button->isChecked())
    {
        this->Curve[4]->setSamples(xData,yData[4]);
    }
    if(ui->Qwt6Button->isChecked())
    {
        this->Curve[5]->setSamples(xData,yData[5]);
    }

    ui->Plot->replot();//重新画图
}

void MainWindow::QwtTime_Slot()
{
    if(Port.isOpen())
    {
        Timei+=0.05;
        if(ui->QwtTrackBox->isChecked())
        {
            ui->Plot->setAxisScale(QwtPlot::xBottom,Timei,25+Timei);
            ui->Plot->replot();//这句话以后要删掉
        }
    }
    else if(!Port.isOpen())
    {
        if(ui->PowerButton->text()=="关闭串口")
        {
            QMessageBox::information(this,"串口可能未打开","请检查串口是否被其他程序占用， \n或者与串口设备失去连接",QMessageBox::Ok);
            this->Port_Init();
        }
    }
}

void MainWindow::QwtClean_Slot()
{
    xData.clear();
    for(int i=0;i<6;i++)
    {
        yData[i].clear();
        this->Curve[i]->setSamples(xData,yData[i]);
    }
    ui->Plot->setAxisScale(QwtPlot::yLeft,-1000,1000);
    ui->Plot->setAxisScale(QwtPlot::xBottom,0,25);

    ui->Plot->replot();
}

int MainWindow::QwtCurrentNumber()
{
    int i=0;
    if(ui->Qwt1Button->isChecked())//设置显示的线
    {
        i++;
    }
    if(ui->Qwt2Button->isChecked())
    {
        i++;
    }
    if(ui->Qwt3Button->isChecked())
    {
        i++;
    }
    if(ui->Qwt4Button->isChecked())
    {
        i++;
    }
    if(ui->Qwt5Button->isChecked())
    {
        i++;
    }
    if(ui->Qwt6Button->isChecked())
    {
        i++;
    }
    return i;
}
