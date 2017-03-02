#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include "include.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void About_Slot();                              //显示关于界面
    void Port_Init();                               //打开串口时初始化
    void SaveFile_Slot();                           //保存文件
    void OpenFile_Slot();                           //从文件发送
    void SendFile_Slot();                           //发送文件
    void Receive_Slot();                            //串口信息接收槽
    void QwtClean_Slot();                           //清空曲线

    void QwtTime_Slot();                            //设置定时器，定时中断检测

private:
    Ui::MainWindow *ui;

    QSerialPort Port;                               //串口对象
    QwtPlotGrid *Grid=new QwtPlotGrid;              //网格图
    QwtPlotCurve *Curve[6];                         //6个笔刷
    QVector<double> yData[6];                       //也是一个容器//抄学长的，建议修改
    QVector<double> xData;
    QTimer *QwtTimer=new QTimer(this);              //设置定时器

    void Set_Slots();                               //设置信号槽
    void MainWindow_Init();                         //初始化窗口界面
    void Port_Scan();                               //初始化串口
    void Qwt_Init();                                //初始化示波器
    void QwtReceive_Slot();                         //Qwt串口接收槽
    void PortReceive_Slot();                        //串口助手接收槽
    int QwtCurrentNumber();                         //检测波数

    double Timei=0;                                 //时间计数器
};

#endif // MAINWINDOW_H
