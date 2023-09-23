/********************************************************************************
** Form generated from reading UI file 'ConsoleViewGrafic.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEVIEWGRAFIC_H
#define UI_CONSOLEVIEWGRAFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Grafic
{
public:
    QCustomPlot *widget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *doubleSpin;
    QSpinBox *doubleSpin_2;

    void setupUi(QWidget *Grafic)
    {
        if (Grafic->objectName().isEmpty())
            Grafic->setObjectName(QString::fromUtf8("Grafic"));
        Grafic->resize(595, 446);
        widget = new QCustomPlot(Grafic);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 571, 321));
        widget->setMinimumSize(QSize(571, 321));
        widget->setMaximumSize(QSize(571, 321));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 20, 131, 41));
        pushButton = new QPushButton(Grafic);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 375, 100, 32));
        layoutWidget = new QWidget(Grafic);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 340, 411, 102));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doubleSpin = new QSpinBox(layoutWidget);
        doubleSpin->setObjectName(QString::fromUtf8("doubleSpin"));
        doubleSpin->setMinimum(-1000000);
        doubleSpin->setMaximum(1000000);

        horizontalLayout->addWidget(doubleSpin);

        doubleSpin_2 = new QSpinBox(layoutWidget);
        doubleSpin_2->setObjectName(QString::fromUtf8("doubleSpin_2"));
        doubleSpin_2->setMinimum(-1000000);
        doubleSpin_2->setMaximum(1000000);
        doubleSpin_2->setValue(0);

        horizontalLayout->addWidget(doubleSpin_2);


        retranslateUi(Grafic);

        QMetaObject::connectSlotsByName(Grafic);
    } // setupUi

    void retranslateUi(QWidget *Grafic)
    {
        Grafic->setWindowTitle(QCoreApplication::translate("Grafic", "Grafic", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Grafic", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic: public Ui_Grafic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEVIEWGRAFIC_H
