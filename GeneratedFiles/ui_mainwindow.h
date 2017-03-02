/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_5;
    QFrame *line_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *COMBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *SpeedBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *DataBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *CheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *StopBox;
    QPushButton *PowerButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AboutQTButton;
    QPushButton *AboutButton;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QGroupBox *groupBox_2;
    QwtPlot *Plot;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *Qwt1Button;
    QCheckBox *Qwt2Button;
    QCheckBox *Qwt3Button;
    QCheckBox *Qwt4Button;
    QCheckBox *Qwt5Button;
    QCheckBox *Qwt6Button;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QComboBox *QwtDataBox;
    QCheckBox *QwtSignedBox;
    QPushButton *QwtCleanButton;
    QCheckBox *QwtTrackBox;
    QWidget *tabWidgetPage2;
    QGroupBox *groupBox_4;
    QFrame *line;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QPushButton *CleanButton;
    QPushButton *SaveFileButton;
    QPushButton *SendFileButton;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *SendCleanBox;
    QCheckBox *HEXCheckBox;
    QGroupBox *groupBox_6;
    QTextEdit *ReceiveArea;
    QTextEdit *SendArea;
    QPushButton *SendButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1018, 696);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 1001, 101));
        line_3 = new QFrame(groupBox_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(820, 20, 16, 71));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 771, 33));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        COMBox = new QComboBox(layoutWidget);
        COMBox->setObjectName(QStringLiteral("COMBox"));

        horizontalLayout->addWidget(COMBox);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        SpeedBox = new QComboBox(layoutWidget);
        SpeedBox->setObjectName(QStringLiteral("SpeedBox"));

        horizontalLayout_2->addWidget(SpeedBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        DataBox = new QComboBox(layoutWidget);
        DataBox->setObjectName(QStringLiteral("DataBox"));

        horizontalLayout_3->addWidget(DataBox);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        CheckBox = new QComboBox(layoutWidget);
        CheckBox->setObjectName(QStringLiteral("CheckBox"));

        horizontalLayout_4->addWidget(CheckBox);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        StopBox = new QComboBox(layoutWidget);
        StopBox->setObjectName(QStringLiteral("StopBox"));

        horizontalLayout_5->addWidget(StopBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        PowerButton = new QPushButton(layoutWidget);
        PowerButton->setObjectName(QStringLiteral("PowerButton"));

        horizontalLayout_6->addWidget(PowerButton);

        layoutWidget1 = new QWidget(groupBox_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(860, 20, 121, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AboutQTButton = new QPushButton(layoutWidget1);
        AboutQTButton->setObjectName(QStringLiteral("AboutQTButton"));

        verticalLayout_2->addWidget(AboutQTButton);

        AboutButton = new QPushButton(layoutWidget1);
        AboutButton->setObjectName(QStringLiteral("AboutButton"));
        AboutButton->setEnabled(true);
        AboutButton->setFlat(false);

        verticalLayout_2->addWidget(AboutButton);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 1001, 571));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 981, 541));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        groupBox_2 = new QGroupBox(tabWidgetPage1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 0, 831, 501));
        Plot = new QwtPlot(groupBox_2);
        Plot->setObjectName(QStringLiteral("Plot"));
        Plot->setGeometry(QRect(0, 20, 821, 471));
        groupBox_3 = new QGroupBox(tabWidgetPage1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 0, 121, 501));
        groupBox_7 = new QGroupBox(groupBox_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 101, 241));
        groupBox_7->setStyleSheet(QStringLiteral(""));
        layoutWidget2 = new QWidget(groupBox_7);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 32, 81, 194));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Qwt1Button = new QCheckBox(layoutWidget2);
        Qwt1Button->setObjectName(QStringLiteral("Qwt1Button"));
        Qwt1Button->setFont(font);
        Qwt1Button->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        Qwt1Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt1Button);

        Qwt2Button = new QCheckBox(layoutWidget2);
        Qwt2Button->setObjectName(QStringLiteral("Qwt2Button"));
        Qwt2Button->setFont(font);
        Qwt2Button->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 255);\n"
"color: rgb(255, 255, 255);"));
        Qwt2Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt2Button);

        Qwt3Button = new QCheckBox(layoutWidget2);
        Qwt3Button->setObjectName(QStringLiteral("Qwt3Button"));
        Qwt3Button->setFont(font);
        Qwt3Button->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);"));
        Qwt3Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt3Button);

        Qwt4Button = new QCheckBox(layoutWidget2);
        Qwt4Button->setObjectName(QStringLiteral("Qwt4Button"));
        Qwt4Button->setFont(font);
        Qwt4Button->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        Qwt4Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt4Button);

        Qwt5Button = new QCheckBox(layoutWidget2);
        Qwt5Button->setObjectName(QStringLiteral("Qwt5Button"));
        Qwt5Button->setFont(font);
        Qwt5Button->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        Qwt5Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt5Button);

        Qwt6Button = new QCheckBox(layoutWidget2);
        Qwt6Button->setObjectName(QStringLiteral("Qwt6Button"));
        Qwt6Button->setFont(font);
        Qwt6Button->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        Qwt6Button->setChecked(true);

        verticalLayout_4->addWidget(Qwt6Button);

        groupBox_8 = new QGroupBox(groupBox_3);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 260, 101, 231));
        layoutWidget3 = new QWidget(groupBox_8);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 82, 159));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        QwtDataBox = new QComboBox(layoutWidget3);
        QwtDataBox->setObjectName(QStringLiteral("QwtDataBox"));

        verticalLayout_6->addWidget(QwtDataBox);

        QwtSignedBox = new QCheckBox(layoutWidget3);
        QwtSignedBox->setObjectName(QStringLiteral("QwtSignedBox"));
        QwtSignedBox->setChecked(true);

        verticalLayout_6->addWidget(QwtSignedBox);

        QwtCleanButton = new QPushButton(layoutWidget3);
        QwtCleanButton->setObjectName(QStringLiteral("QwtCleanButton"));

        verticalLayout_6->addWidget(QwtCleanButton);

        QwtTrackBox = new QCheckBox(layoutWidget3);
        QwtTrackBox->setObjectName(QStringLiteral("QwtTrackBox"));
        QFont font1;
        font1.setPointSize(12);
        QwtTrackBox->setFont(font1);
        QwtTrackBox->setChecked(true);

        verticalLayout_6->addWidget(QwtTrackBox);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        groupBox_4 = new QGroupBox(tabWidgetPage2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 121, 491));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        groupBox_4->setFont(font2);
        groupBox_4->setCheckable(false);
        line = new QFrame(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 101, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 180, 101, 101));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        CleanButton = new QPushButton(layoutWidget4);
        CleanButton->setObjectName(QStringLiteral("CleanButton"));

        verticalLayout->addWidget(CleanButton);

        SaveFileButton = new QPushButton(layoutWidget4);
        SaveFileButton->setObjectName(QStringLiteral("SaveFileButton"));

        verticalLayout->addWidget(SaveFileButton);

        SendFileButton = new QPushButton(layoutWidget4);
        SendFileButton->setObjectName(QStringLiteral("SendFileButton"));

        verticalLayout->addWidget(SendFileButton);

        layoutWidget5 = new QWidget(groupBox_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 40, 109, 62));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        SendCleanBox = new QCheckBox(layoutWidget5);
        SendCleanBox->setObjectName(QStringLiteral("SendCleanBox"));
        SendCleanBox->setAcceptDrops(false);

        verticalLayout_3->addWidget(SendCleanBox);

        HEXCheckBox = new QCheckBox(layoutWidget5);
        HEXCheckBox->setObjectName(QStringLiteral("HEXCheckBox"));

        verticalLayout_3->addWidget(HEXCheckBox);

        groupBox_6 = new QGroupBox(tabWidgetPage2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(140, 10, 831, 491));
        ReceiveArea = new QTextEdit(groupBox_6);
        ReceiveArea->setObjectName(QStringLiteral("ReceiveArea"));
        ReceiveArea->setGeometry(QRect(10, 10, 811, 391));
        QFont font3;
        font3.setPointSize(20);
        ReceiveArea->setFont(font3);
        SendArea = new QTextEdit(groupBox_6);
        SendArea->setObjectName(QStringLiteral("SendArea"));
        SendArea->setGeometry(QRect(10, 410, 721, 71));
        QFont font4;
        font4.setPointSize(16);
        SendArea->setFont(font4);
        SendArea->setStyleSheet(QLatin1String("/* === Shared === */\n"
"QStackedWidget, QLabel, QPushButton, QRadioButton, QCheckBox, \n"
"QGroupBox, QStatusBar, QToolButton, QComboBox, QDialog {\n"
"    background-color: #222222;\n"
"    color: #BBBBBB;\n"
"    font-family: \"Segoe UI\";\n"
"}\n"
"\n"
"/* === QWidget === */\n"
"QWidget:window {\n"
"    background: #222222;\n"
"    color: #BBBBBB;\n"
"    font-family: \"Segoe UI\";\n"
"}\n"
"\n"
"/* === QToolTip === */\n"
"QToolTip {\n"
"    background-color: #000000;\n"
"    border: 2px solid #333333;\n"
"    color: yellow;\n"
"}\n"
"\n"
"/* === QPushButton === */\n"
"QPushButton {\n"
"    border: 1px solid #333333;\n"
"    padding: 4px;\n"
"    min-width: 65px;\n"
"    min-height: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333333;\n"
"    border-color: #444444;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #111111;\n"
"    border-color: #333333;\n"
"    color: yellow;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* === Checkable it"
                        "ems === */\n"
"QCheckBox::indicator, QRadioButton::indicator, QTreeView::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    background-color: #111111;\n"
"    border: 1px solid #333333;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator::checked, QRadioButton::indicator::checked, QTreeView::indicator::checked {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, fx:0.25, fy:0.15, radius:0.3, stop:0 #BBBBBB, stop:1 #111111);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled, QTreeView::indicator:disabled {\n"
"    background-color: #444444;\n"
"}\n"
"\n"
"QCheckBox::indicator::checked:disabled, QRadioButton::indicator::checked:disabled, QTreeView::indicator::checked:disabled {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, fx:0.25, fy:0.15, radius:0.3, stop:0 #BBBBBB, stop:1 #444444);\n"
"}\n"
"\n"
"/* === QComboBox === */\n"
"QComboBox {\n"
"    background-color: black;\n"
"    border: 1px solid #333"
                        "333;\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    border: 2px solid #333333;\n"
"    width: 6px;\n"
"    height: 6px;\n"
"    background: #5f5f5f;\n"
"}\n"
"\n"
"/* === QGroupBox === */\n"
"QGroupBox {\n"
"    border: 2px solid #333333;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: yellow;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    margin-left: 5px;\n"
"}\n"
"\n"
"/* === QTabWidget === */\n"
"QTabWidget::pane {\n"
"    background: #222222;\n"
"    border: 2px solid #333333;\n"
"}\n"
"\n"
"/* === QTabBar === */\n"
"QTabBar::tab {\n"
"    background: transparent;\n"
"    border: 1px solid #333333;\n"
"    border-bottom: none;\n"
"    color: #BBBBBB;\n"
"    padding-left: 5px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    p"
                        "adding-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background-color: #333333;\n"
"    border: 1px solid #444444;\n"
"    border-bottom: none;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #111111;\n"
"    border: 1px solid #333333;\n"
"    border-top: 1px solid yellow;\n"
"    border-bottom: none;\n"
"    color: yellow\n"
"}\n"
"\n"
"/* === QToolBar === */\n"
"QToolBar {\n"
"    background-color: #222222;\n"
"    border: none;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QToolBar:handle {\n"
"    background: #222222;\n"
"    border-left: 1px dotted yellow;\n"
"    color: #BBBBBB;\n"
"}\n"
"\n"
"QToolBar::separator {\n"
"    width: 6px;\n"
"    background-color: #222222;\n"
"}\n"
"\n"
"/* === QToolButton === */\n"
"QToolButton {\n"
"    border: 1px solid #333333;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #333333;\n"
"    border: 1px solid #444444;\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
"    padding-right: 20"
                        "px; /* make way for the popup button */\n"
"}\n"
"\n"
"QToolButton::menu-button {\n"
"    border-left: 1px solid #333333;\n"
"    background: transparent;\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton::menu-button:hover {\n"
"    border-left: 1px solid #444444;\n"
"    background: transparent;\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton:checked, QToolButton:pressed {\n"
"    background-color: #111111;\n"
"    color: yellow;\n"
"}\n"
"\n"
"/* === QMenu === */\n"
"QMenu {\n"
"    background-color: black;\n"
"    border: 1px solid gray;\n"
"    color: white;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 2px 25px 2px 20px;\n"
"    border: 1px solid transparent;\n"
"}\n"
"\n"
"QMenu::item:disabled {\n"
"    color: #666666;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    border-color: gray;\n"
"    background: #222222;\n"
"}\n"
"\n"
"QMenu::icon:checked {\n"
"\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 1px;\n"
"    background: #222222;\n"
"    margin-left: 10px;\n"
"    margin-right:"
                        " 10px;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"}\n"
"\n"
"QMenu::indicator {\n"
"    width: 13px;\n"
"    height: 13px;\n"
"}\n"
"\n"
"/* === QMenuBar === */\n"
"QMenuBar {\n"
"    background-color: black;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:disabled {\n"
"    color: gray;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background: #222222;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: #444444;\n"
"}\n"
" \n"
"/* === QScrollBar:vertical === */\n"
"QScrollBar:vertical {\n"
"    background: #111111;\n"
"    width: 16px;\n"
"    margin: 16px 0 16px 0;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #555555;\n"
"    min-height: 16px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: #444444;\n"
"    height: 16px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    background: #444444;\n"
"    hei"
                        "ght: 16px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical, QScrollBar:down-arrow:vertical {\n"
"    border: 2px solid #333333;\n"
"    width: 6px;\n"
"    height: 6px;\n"
"    background: #5f5f5f;\n"
"}\n"
"\n"
"/* === QScrollBar:horizontal === */\n"
"QScrollBar:horizontal {\n"
"    background: #111111;\n"
"    height: 16px;\n"
"    margin: 0 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #555555;\n"
"    min-width: 16px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    background: #444444;\n"
"    width: 16px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    background: #444444;\n"
"    width: 16px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBa"
                        "r::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal, QScrollBar:right-arrow:horizontal {\n"
"    border: 2px solid #333333;\n"
"    width: 6px;\n"
"    height: 6px;\n"
"    background: #5f5f5f;\n"
"}\n"
"\n"
"/* =================== */\n"
"QLineEdit, QListView, QTreeView, QTableView, QAbstractSpinBox {\n"
"    background-color: black;\n"
"    color: #BBBBBB;\n"
"    border: 1px solid #333333;\n"
"}\n"
"\n"
"QAbstractScrollArea, QLineEdit, QTextEdit, QAbstractSpinBox, QComboBox {\n"
"    border-color: #333333;\n"
"    border: 1px solid #333333;\n"
"\n"
"}\n"
"\n"
"/* === QHeaderView === */\n"
"QHeaderView::section {\n"
"    background: #222222;\n"
"    border: 0;\n"
"    color: #BBBBBB;\n"
"    padding: 3px 0 3px 4px;\n"
"}\n"
"\n"
"/* === QListView === */\n"
"QListView::item:hover {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    background: #111111;\n"
"    color: yellow;\n"
"}\n"
"\n"
"/* === QTableView === */\n"
"QTableView::item:h"
                        "over {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background: #111111;\n"
"    color: yellow;\n"
"}\n"
"\n"
"/* === QTreeView === */\n"
"QTreeView::item {\n"
"    background: black;\n"
"}\n"
"\n"
"QTreeView::item:hover {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QTreeView::item:selected {\n"
"    background: #111111;\n"
"    color: yellow;\n"
"}\n"
"\n"
"QTreeView::branch {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:has-siblings {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings {\n"
"\n"
"}\n"
"\n"
"/* === Customizations === */\n"
"QFrame#infoLabel {\n"
"    border: 1px inset #333333;\n"
""
                        "}\n"
"2.\n"
"\n"
".QWidget {\n"
"   background-color: beige;\n"
"}\n"
"\n"
"QToolBar {\n"
"    background-color: beige;\n"
"}\n"
"\n"
"QDialog, QFileDialog {\n"
"    background-color: beige;\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"QTabBar, QTabWidget {\n"
"    background-color: beige;\n"
"}\n"
"QTabBar::tab {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"     border: 1px solid darkkhaki;\n"
"     border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"     padding: 2px;\n"
" }\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2"
                        ": 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* Nice Windows-XP-style password character. */\n"
"QLineEdit[echoMode=\"2\"] {\n"
"    lineedit-password-character: 9679;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"     background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0 #616161, stop: 0.5 #505050,\n"
"                                       stop: 0.6 #434343, stop:1 #656565);\n"
"     color: white;\n"
"     padding-left: 4px;\n"
"     border: 1px solid #6c6c6c;\n"
" }\n"
"\n"
" QHeaderView::section:checked\n"
" {\n"
"     background-color: red;\n"
" }\n"
"\n"
"\n"
"/* We provide a min-width and min"
                        "-height for push buttons\n"
"   so that they look elegant regardless of the width of the text. */\n"
"QPushButton {\n"
"    background-color: palegoldenrod;\n"
"    border-width: 2px;\n"
"    border-color: darkkhaki;\n"
"    border-style: solid;\n"
"    border-radius: 5;\n"
"    padding: 3px;\n"
"    min-width: 9ex;\n"
"    min-height: 2.5ex;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: khaki;\n"
"}\n"
"\n"
"/* Increase the padding, so the text is shifted when the button is\n"
"   pressed. */\n"
"QPushButton:pressed {\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"    background-color: #d0d67c;\n"
"}\n"
"\n"
"QLabel, QAbstractButton {\n"
"    font: bold;\n"
"}\n"
"\n"
"/* Mark mandatory fields with a brownish color. */\n"
".mandatory {\n"
"    color: brown;\n"
"}\n"
"\n"
"/* Bold text on status bar looks awful. */\n"
"QStatusBar QLabel {\n"
"   font: normal;\n"
"}\n"
"\n"
"QStatusBar::item {\n"
"    border-width: 1;\n"
"    border-color: darkkhaki;\n"
"    border-style: solid;\n"
"    "
                        "border-radius: 2;\n"
"}\n"
"\n"
"QStackedWidget, QComboBox, QLineEdit, QSpinBox, QTextEdit, QListView, QWebView, QTreeView, QHeaderView {\n"
"    background-color: cornsilk;\n"
"    selection-color: #0a214c; \n"
"    selection-background-color: #C19A6B;\n"
"}\n"
"\n"
"QListView {\n"
"    show-decoration-selected: 1;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: wheat;\n"
"}\n"
"\n"
"/* We reserve 1 pixel space in padding. When we get the focus,\n"
"   we kill the padding and enlarge the border. This makes the items\n"
"   glow. */\n"
"QLineEdit, QFrame {\n"
"    border-width: 1px;\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border-color: darkkhaki;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* As mentioned above, eliminate the padding and increase the border. */\n"
"QLineEdit:focus, QFrame:focus {\n"
"    border-width: 3px;\n"
"    padding: 0px;\n"
"}\n"
"\n"
"/* A QLabel is a QFrame  */\n"
"QLabel {\n"
"    border: none;\n"
"    padding: 0;\n"
"    background: none;\n"
"}\n"
""
                        "\n"
"/* A QToolTip is a QLabel  */\n"
"QToolTip {\n"
"    border: 2px solid darkkhaki;\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"/* Nice to have the background color change when hovered. */\n"
"QRadioButton:hover, QCheckBox:hover {\n"
"    background-color: wheat;\n"
"}\n"
"\n"
"/* Force the dialog's buttons to follow the Windows guidelines. */\n"
"QDialogButtonBox {\n"
"    button-layout: 0;\n"
"}\n"
"\n"
"\n"
"3.\n"
"/*\n"
"    Style by evilworks, 2012-2013. pollux@lavabit.com\n"
"    This file is Public Domain.\n"
"*/\n"
"\n"
"/* === Shared === */\n"
"QStackedWidget, QLabel, QPushButton, QRadioButton, QCheckBox, \n"
"QGroupBox, QStatusBar, QToolButton, QComboBox, QDialog, QTabBar {\n"
"    font-family: \"Segoe UI\";\n"
"    background-color: #888;\n"
"    color: #000;\n"
"}\n"
"\n"
"/* === QWidget === */\n"
"QWidget:window {\n"
"    font-family: 'Segoe UI';\n"
"    background-color: #888;\n"
"}\n"
"\n"
"/* === QPushButton === */\n"
"QPushButton {\n"
"    border: "
                        "1px solid #555;\n"
"    padding: 4px;\n"
"    min-width: 65px;\n"
"    min-height: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #999;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border-color: #555;\n"
"    color: #AAA;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* === QComboBox === */\n"
"QComboBox {\n"
"    background-color: #AAA;\n"
"    border: 1px solid #555;\n"
"    color: black;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"}\n"
"\n"
"/* === QGroupBox === */\n"
"QGroupBox {\n"
"    border: 1px solid #555;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: black;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;    \n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"/* === QTabBar === */\n"
"QTabBar::tab {\n"
"    border-bottom: none;\n"
"    color: #000;\n"
"    pa"
                        "dding: 4px;\n"
"    background-color: #888;\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background-color: #AAA;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #000;\n"
"    color: white;\n"
"}\n"
"\n"
"/* === QTabWidget === */\n"
"QTabWidget::pane {\n"
"    background: #888;\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"\n"
"/* === QToolBar === */\n"
"QToolBar {\n"
"    background: #949494;\n"
"    border: none;\n"
"    padding-left: 0px;\n"
"    padding-right: 0px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QToolBar::separator {\n"
"    width: 1px;\n"
"    margin-left: 3px;\n"
"    margin-right: 3px;\n"
"    background-color: #555;\n"
"}\n"
"\n"
"/* === QToolButton === */\n"
"QToolButton {\n"
"    border: 1px solid #666;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #AAA;\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
"    padding-right: 20px; /* make way for the popup button */\n"
"}\n"
"\n"
"QToo"
                        "lButton::menu-button {\n"
"    border-left: 1px solid #666;\n"
"    background: transparent;\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton::menu-button:hover {\n"
"    border-left: 1px solid #666;\n"
"    background: transparent;\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton:checked, QToolButton:pressed {\n"
"    background-color: #000;\n"
"    border: 1px solid #555;\n"
"    color: white;\n"
"}\n"
"\n"
"/* === QScrollBar:vertical === */\n"
"QScrollBar:vertical {\n"
"    width: 16px;\n"
"    margin: 16px 0 16px 0;\n"
"    background: #333;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #888;\n"
"    min-height: 16px;\n"
"    border-top: 1px solid #666;\n"
"    border-bottom: 1px solid #666;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: #888;\n"
"    height: 16px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    background: #888;\n"
"    height: 16px;\n"
"    subcontrol-position: top;\n"
"   "
                        " subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"/* === QScrollBar:horizontal === */\n"
"QScrollBar:horizontal {\n"
"    height: 16px;\n"
"    margin: 0 16px 0 16px;\n"
"    background: #333;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #888;\n"
"    min-width: 16px;\n"
"    border-left: 1px solid #666;\n"
"    border-right: 1px solid #666;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    background: #888;\n"
"    width: 16px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    background: #888;\n"
"    width: 16px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"/* === QMenu === */\n"
"QMenu {\n"
"    background-color: black;\n"
"    border: 1px solid gray;\n"
"    c"
                        "olor: white;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 2px 25px 2px 20px;\n"
"    border: 1px solid transparent;\n"
"}\n"
"\n"
"QMenu::item:disabled {\n"
"    color: #666666;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    border-color: gray;\n"
"    background: #222222;\n"
"}\n"
"\n"
"QMenu::icon:checked {\n"
"\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 1px;\n"
"    background: #222222;\n"
"    margin-left: 10px;\n"
"    margin-right: 10px;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"}\n"
"\n"
"QMenu::indicator {\n"
"    width: 13px;\n"
"    height: 13px;\n"
"}\n"
"\n"
"/* === QMenuBar === */\n"
"QMenuBar {\n"
"    background-color: black;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:disabled {\n"
"    color: gray;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background: #222222;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: #444444;\n"
"}\n"
"/* =================== */\n"
"QLin"
                        "eEdit, QListView, QTreeView, QTableView, QAbstractSpinBox {\n"
"    background-color: #AAA;\n"
"    color: #000;\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QAbstractScrollArea, QLineEdit, QTextEdit, QAbstractSpinBox, QComboBox {\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"/* === QHeaderView === */\n"
"QHeaderView::section {\n"
"    height: 20px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background: #666;\n"
"    border: 0;\n"
"    color: #000;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"/* === QListView === */\n"
"QListView::item:hover {\n"
"    background: #AAA;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    background: #333;\n"
"    color: #AAA;\n"
"}\n"
"\n"
"/* === QTableView === */\n"
"QTableView::item:hover {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background: #111111;\n"
"    color: yellow;\n"
"}\n"
"\n"
"/* === QTreeView === */\n"
"QTreeView::item {\n"
"    background: #AAA;\n"
"}\n"
"\n"
"QTreeView::item:hover {\n"
"    background: #CCC;\n"
"}\n"
"\n"
""
                        "QTreeView::item:selected {\n"
"    background: #333;\n"
"    color: #AAA;\n"
"}\n"
"\n"
"QTreeView::branch {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:has-siblings {\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings {\n"
"\n"
"}"));
        SendButton = new QPushButton(groupBox_6);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(740, 410, 81, 71));
        tabWidget->addTab(tabWidgetPage2, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        AboutButton->setDefault(true);
        tabWidget->setCurrentIndex(0);
        SendButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207:", Q_NULLPTR));
        SpeedBox->clear();
        SpeedBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "14400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215:", Q_NULLPTR));
        DataBox->clear();
        DataBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\225\210\351\252\214\344\275\215:", Q_NULLPTR));
        CheckBox->clear();
        CheckBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\207\346\225\210\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\266\346\225\210\351\252\214", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215:", Q_NULLPTR));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        PowerButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        AboutQTButton->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt", Q_NULLPTR));
        AboutButton->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\255\244\350\275\257\344\273\266", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\260\203\350\257\225\345\212\251\346\211\213", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\346\263\242\345\275\242", Q_NULLPTR));
        Qwt1Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2421", Q_NULLPTR));
        Qwt2Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2422", Q_NULLPTR));
        Qwt3Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2423", Q_NULLPTR));
        Qwt4Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2424", Q_NULLPTR));
        Qwt5Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2425", Q_NULLPTR));
        Qwt6Button->setText(QApplication::translate("MainWindow", "\346\263\242\345\275\2426", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234 ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\261\273\345\236\213:", Q_NULLPTR));
        QwtDataBox->clear();
        QwtDataBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8\344\275\215", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16\344\275\215", Q_NULLPTR)
         << QApplication::translate("MainWindow", "32\344\275\215", Q_NULLPTR)
        );
        QwtSignedBox->setText(QApplication::translate("MainWindow", "\346\234\211\347\254\246\345\217\267", Q_NULLPTR));
        QwtCleanButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        QwtTrackBox->setText(QApplication::translate("MainWindow", "\350\267\237\350\270\252", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("MainWindow", "\350\231\232\346\213\237\347\244\272\346\263\242\345\231\250", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        CleanButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        SaveFileButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        SendFileButton->setText(QApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\345\217\221\351\200\201", Q_NULLPTR));
        SendCleanBox->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\220\216\346\270\205\347\251\272", Q_NULLPTR));
        HEXCheckBox->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        ReceiveArea->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221 Light'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#5d5d5d;\">\346\216\245\346\224\266\345\214\272</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", Q_NULLPTR));
        SendArea->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221 Light'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5d5d5d;\">\345\217\221\351\200\201\345\214\272</span></p></body></html>", Q_NULLPTR));
        SendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
