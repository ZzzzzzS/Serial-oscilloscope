#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include "include.h"

aboutwindow::aboutwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutwindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint|Qt::Popup);

    this->setMinimumSize(360,120);
    this->setMaximumSize(360,120);
    this->setWindowTitle("718 Innovation Lab");

    this->pix->load("logo.jpg");
    ui->label->setPixmap(this->pix->scaled(ui->label->size()));
    ui->label->show();

    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(webslot()));
}

aboutwindow::~aboutwindow()
{
    delete ui;
}

void aboutwindow::webslot()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://git.oschina.net/code.zzs/Serial-oscilloscope")));
}
