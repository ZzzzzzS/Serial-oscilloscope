#include "readme.h"
#include "ui_readme.h"

readme::readme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::readme)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
    this->setWindowTitle("718 Innovation Lab");
    this->setMaximumSize(348,227);
    this->setMinimumSize(348,227);
    this->setWindowFlags(Qt::WindowCloseButtonHint);
}

readme::~readme()
{
    delete ui;
}
