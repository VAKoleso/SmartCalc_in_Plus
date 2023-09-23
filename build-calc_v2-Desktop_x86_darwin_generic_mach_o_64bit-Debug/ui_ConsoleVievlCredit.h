/********************************************************************************
** Form generated from reading UI file 'ConsoleVievlCredit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEVIEVLCREDIT_H
#define UI_CONSOLEVIEVLCREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLineEdit *lineEdit_god;
    QLineEdit *lineEdit_staf;
    QLineEdit *lineEdit_summ;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_one;
    QLineEdit *lineEdit_pere;
    QLineEdit *lineEdit_res;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit_two;
    QLabel *label_7;
    QLineEdit *lineEdit_mes;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(513, 591);
        Credit->setMinimumSize(QSize(513, 591));
        Credit->setMaximumSize(QSize(513, 591));
        Credit->setStyleSheet(QString::fromUtf8("background-color: #404040;\n"
" border-color: #BEBEBE;"));
        lineEdit_god = new QLineEdit(Credit);
        lineEdit_god->setObjectName(QString::fromUtf8("lineEdit_god"));
        lineEdit_god->setGeometry(QRect(140, 180, 115, 41));
        lineEdit_god->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_god->setAlignment(Qt::AlignCenter);
        lineEdit_staf = new QLineEdit(Credit);
        lineEdit_staf->setObjectName(QString::fromUtf8("lineEdit_staf"));
        lineEdit_staf->setGeometry(QRect(260, 80, 231, 41));
        lineEdit_staf->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_staf->setAlignment(Qt::AlignCenter);
        lineEdit_summ = new QLineEdit(Credit);
        lineEdit_summ->setObjectName(QString::fromUtf8("lineEdit_summ"));
        lineEdit_summ->setGeometry(QRect(20, 80, 231, 41));
        lineEdit_summ->setMaximumSize(QSize(3242424, 16777215));
        lineEdit_summ->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_summ->setAlignment(Qt::AlignCenter);
        radioButton = new QRadioButton(Credit);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(90, 290, 131, 22));
        QFont font;
        font.setPointSize(18);
        radioButton->setFont(font);
        radioButton_2 = new QRadioButton(Credit);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 290, 211, 22));
        radioButton_2->setFont(font);
        lineEdit_one = new QLineEdit(Credit);
        lineEdit_one->setObjectName(QString::fromUtf8("lineEdit_one"));
        lineEdit_one->setGeometry(QRect(20, 410, 231, 41));
        lineEdit_one->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_one->setAlignment(Qt::AlignCenter);
        lineEdit_pere = new QLineEdit(Credit);
        lineEdit_pere->setObjectName(QString::fromUtf8("lineEdit_pere"));
        lineEdit_pere->setGeometry(QRect(260, 410, 231, 41));
        lineEdit_pere->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_pere->setAlignment(Qt::AlignCenter);
        lineEdit_res = new QLineEdit(Credit);
        lineEdit_res->setObjectName(QString::fromUtf8("lineEdit_res"));
        lineEdit_res->setGeometry(QRect(260, 500, 231, 41));
        lineEdit_res->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_res->setAlignment(Qt::AlignCenter);
        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 55, 191, 20));
        label->setFont(font);
        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 160, 111, 21));
        label_2->setFont(font);
        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 58, 161, 16));
        label_3->setFont(font);
        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 386, 131, 20));
        label_4->setFont(font);
        label_5 = new QLabel(Credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 386, 191, 21));
        label_5->setFont(font);
        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 479, 131, 16));
        label_6->setFont(font);
        pushButton = new QPushButton(Credit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 330, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
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
        lineEdit_two = new QLineEdit(Credit);
        lineEdit_two->setObjectName(QString::fromUtf8("lineEdit_two"));
        lineEdit_two->setGeometry(QRect(20, 500, 231, 41));
        lineEdit_two->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_two->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Credit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 476, 161, 21));
        label_7->setFont(font);
        lineEdit_mes = new QLineEdit(Credit);
        lineEdit_mes->setObjectName(QString::fromUtf8("lineEdit_mes"));
        lineEdit_mes->setGeometry(QRect(260, 180, 115, 41));
        lineEdit_mes->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_mes->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(Credit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 230, 31, 21));
        label_8->setFont(font);
        label_9 = new QLabel(Credit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 230, 58, 16));
        label_9->setFont(font);

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("Credit", "\320\237\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271 \320\237\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_8->setText(QCoreApplication::translate("Credit", "\320\223\320\276\320\264", nullptr));
        label_9->setText(QCoreApplication::translate("Credit", "\320\234\320\265\321\201\321\217\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEVIEVLCREDIT_H
