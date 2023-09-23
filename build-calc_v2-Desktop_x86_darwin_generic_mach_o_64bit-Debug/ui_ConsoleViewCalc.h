/********************************************************************************
** Form generated from reading UI file 'ConsoleViewCalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEVIEWCALC_H
#define UI_CONSOLEVIEWCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consoleView
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_c;
    QPushButton *pushButton_acos;
    QLabel *label;
    QPushButton *pushButton_x;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_del;
    QPushButton *pushButton_9;
    QPushButton *pushButton_prav;
    QPushButton *pushButton_log;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_rav;
    QPushButton *pushButton_sqrt;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_lev;
    QPushButton *pushButton_ste;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_c_2;
    QLineEdit *Strochka_2;
    QPushButton *pushButton_cred;
    QPushButton *pushButton_umn;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sum;
    QLineEdit *strochka;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_raz;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_ost;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_toch;
    QPushButton *pushButton_4;
    QPushButton *pushButton_asin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *consoleView)
    {
        if (consoleView->objectName().isEmpty())
            consoleView->setObjectName(QString::fromUtf8("consoleView"));
        consoleView->resize(513, 591);
        consoleView->setMinimumSize(QSize(513, 591));
        consoleView->setMaximumSize(QSize(513, 591));
        consoleView->setStyleSheet(QString::fromUtf8("background-color: #404040;\n"
" border-color: #BEBEBE;"));
        centralwidget = new QWidget(consoleView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_c = new QPushButton(centralwidget);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        pushButton_c->setGeometry(QRect(343, 100, 47, 47));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_c->sizePolicy().hasHeightForWidth());
        pushButton_c->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(24);
        pushButton_c->setFont(font);
        pushButton_c->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_c->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(48, 48, 48, 0);\n"
"color: \"white\";\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(144, 143, 146);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    color: \"black\";\n"
"}\n"
""));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(125, 240, 82, 47));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_acos->setFont(font1);
        pushButton_acos->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(63, 110, 51, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("PT Sans Caption")});
        font2.setPointSize(36);
        label->setFont(font2);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(282, 453, 47, 47));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica")});
        font3.setPointSize(24);
        font3.setBold(true);
        pushButton_x->setFont(font3);
        pushButton_x->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(29, 240, 82, 47));
        pushButton_cos->setFont(font1);
        pushButton_cos->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(404, 169, 82, 47));
        pushButton_del->setFont(font3);
        pushButton_del->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_del->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(343, 240, 47, 47));
        pushButton_9->setFont(font3);
        pushButton_9->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_prav = new QPushButton(centralwidget);
        pushButton_prav->setObjectName(QString::fromUtf8("pushButton_prav"));
        pushButton_prav->setGeometry(QRect(282, 169, 47, 47));
        pushButton_prav->setFont(font3);
        pushButton_prav->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_prav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(125, 382, 82, 47));
        pushButton_log->setFont(font1);
        pushButton_log->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(221, 240, 47, 47));
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(343, 382, 47, 47));
        pushButton_3->setFont(font3);
        pushButton_3->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(29, 382, 82, 47));
        pushButton_ln->setFont(font1);
        pushButton_ln->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_rav = new QPushButton(centralwidget);
        pushButton_rav->setObjectName(QString::fromUtf8("pushButton_rav"));
        pushButton_rav->setGeometry(QRect(404, 453, 82, 47));
        pushButton_rav->setFont(font3);
        pushButton_rav->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_rav->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(29, 453, 82, 47));
        pushButton_sqrt->setFont(font1);
        pushButton_sqrt->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 42, 23, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(0, 0));
        radioButton_2->setSizeIncrement(QSize(0, 0));
        radioButton_2->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(radioButton_2);

        pushButton_lev = new QPushButton(centralwidget);
        pushButton_lev->setObjectName(QString::fromUtf8("pushButton_lev"));
        pushButton_lev->setGeometry(QRect(221, 169, 47, 47));
        pushButton_lev->setFont(font3);
        pushButton_lev->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_lev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_ste = new QPushButton(centralwidget);
        pushButton_ste->setObjectName(QString::fromUtf8("pushButton_ste"));
        pushButton_ste->setGeometry(QRect(125, 453, 82, 47));
        pushButton_ste->setFont(font3);
        pushButton_ste->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ste->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(403, 100, 82, 47));
        pushButton_ac->setFont(font);
        pushButton_ac->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_ac->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"color: \"white\";\n"
"background-color: \"black\";\n"
"border-color: \"white\";\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(282, 311, 47, 47));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(343, 311, 47, 47));
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(125, 311, 82, 47));
        pushButton_atan->setFont(font1);
        pushButton_atan->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_c_2 = new QPushButton(centralwidget);
        pushButton_c_2->setObjectName(QString::fromUtf8("pushButton_c_2"));
        pushButton_c_2->setGeometry(QRect(433, 30, 47, 47));
        pushButton_c_2->setFont(font);
        pushButton_c_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_c_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(48, 48, 48, 0);\n"
"color: \"white\";\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(144, 143, 146);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    color: \"black\";\n"
"}\n"
""));
        Strochka_2 = new QLineEdit(centralwidget);
        Strochka_2->setObjectName(QString::fromUtf8("Strochka_2"));
        Strochka_2->setGeometry(QRect(122, 98, 211, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Strochka_2->sizePolicy().hasHeightForWidth());
        Strochka_2->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(24);
        Strochka_2->setFont(font4);
        Strochka_2->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_cred = new QPushButton(centralwidget);
        pushButton_cred->setObjectName(QString::fromUtf8("pushButton_cred"));
        pushButton_cred->setGeometry(QRect(131, 513, 261, 31));
        pushButton_cred->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #828282;"));
        pushButton_umn = new QPushButton(centralwidget);
        pushButton_umn->setObjectName(QString::fromUtf8("pushButton_umn"));
        pushButton_umn->setGeometry(QRect(404, 240, 82, 47));
        pushButton_umn->setFont(font3);
        pushButton_umn->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_umn->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(29, 311, 82, 47));
        pushButton_tan->setFont(font1);
        pushButton_tan->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_tan->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(404, 382, 82, 47));
        pushButton_sum->setFont(font3);
        pushButton_sum->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sum->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        strochka = new QLineEdit(centralwidget);
        strochka->setObjectName(QString::fromUtf8("strochka"));
        strochka->setGeometry(QRect(67, 28, 351, 55));
        QFont font5;
        font5.setPointSize(26);
        strochka->setFont(font5);
        strochka->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(221, 382, 47, 47));
        pushButton_1->setFont(font3);
        pushButton_1->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(221, 453, 47, 47));
        pushButton_0->setFont(font3);
        pushButton_0->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_raz = new QPushButton(centralwidget);
        pushButton_raz->setObjectName(QString::fromUtf8("pushButton_raz"));
        pushButton_raz->setGeometry(QRect(404, 311, 82, 47));
        pushButton_raz->setFont(font3);
        pushButton_raz->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_raz->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(282, 382, 47, 47));
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(282, 240, 47, 47));
        pushButton_8->setFont(font3);
        pushButton_8->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_ost = new QPushButton(centralwidget);
        pushButton_ost->setObjectName(QString::fromUtf8("pushButton_ost"));
        pushButton_ost->setGeometry(QRect(343, 170, 47, 47));
        pushButton_ost->setFont(font3);
        pushButton_ost->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ost->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(29, 169, 82, 47));
        pushButton_sin->setFont(font1);
        pushButton_sin->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sin->setAutoFillBackground(false);
        pushButton_sin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_sin->setAutoRepeat(false);
        pushButton_sin->setAutoExclusive(false);
        pushButton_toch = new QPushButton(centralwidget);
        pushButton_toch->setObjectName(QString::fromUtf8("pushButton_toch"));
        pushButton_toch->setGeometry(QRect(343, 453, 47, 47));
        pushButton_toch->setFont(font3);
        pushButton_toch->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_toch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(221, 311, 47, 47));
        pushButton_4->setFont(font3);
        pushButton_4->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(125, 169, 82, 47));
        pushButton_asin->setFont(font1);
        pushButton_asin->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_asin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        consoleView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(consoleView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 513, 21));
        consoleView->setMenuBar(menubar);
        statusbar = new QStatusBar(consoleView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        consoleView->setStatusBar(statusbar);

        retranslateUi(consoleView);

        QMetaObject::connectSlotsByName(consoleView);
    } // setupUi

    void retranslateUi(QMainWindow *consoleView)
    {
        consoleView->setWindowTitle(QCoreApplication::translate("consoleView", "SmartCalc", nullptr));
        pushButton_c->setText(QCoreApplication::translate("consoleView", "\342\214\253", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("consoleView", "acos", nullptr));
        label->setText(QCoreApplication::translate("consoleView", "x =", nullptr));
        pushButton_x->setText(QCoreApplication::translate("consoleView", "x", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("consoleView", "cos", nullptr));
        pushButton_del->setText(QCoreApplication::translate("consoleView", "/", nullptr));
        pushButton_9->setText(QCoreApplication::translate("consoleView", "9", nullptr));
        pushButton_prav->setText(QCoreApplication::translate("consoleView", ")", nullptr));
        pushButton_log->setText(QCoreApplication::translate("consoleView", "log", nullptr));
        pushButton_7->setText(QCoreApplication::translate("consoleView", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("consoleView", "3", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("consoleView", "ln", nullptr));
        pushButton_rav->setText(QCoreApplication::translate("consoleView", "=", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("consoleView", "sqrt", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        pushButton_lev->setText(QCoreApplication::translate("consoleView", "(", nullptr));
        pushButton_ste->setText(QCoreApplication::translate("consoleView", "^", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("consoleView", "AC", nullptr));
        pushButton_5->setText(QCoreApplication::translate("consoleView", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("consoleView", "6", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("consoleView", "atan", nullptr));
        pushButton_c_2->setText(QCoreApplication::translate("consoleView", "\342\214\253", nullptr));
        pushButton_cred->setText(QCoreApplication::translate("consoleView", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_umn->setText(QCoreApplication::translate("consoleView", "*", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("consoleView", "tan", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("consoleView", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("consoleView", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("consoleView", "0", nullptr));
        pushButton_raz->setText(QCoreApplication::translate("consoleView", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("consoleView", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("consoleView", "8", nullptr));
        pushButton_ost->setText(QCoreApplication::translate("consoleView", "%", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("consoleView", "sin", nullptr));
        pushButton_toch->setText(QCoreApplication::translate("consoleView", ".", nullptr));
        pushButton_4->setText(QCoreApplication::translate("consoleView", "4", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("consoleView", "asin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consoleView: public Ui_consoleView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEVIEWCALC_H
