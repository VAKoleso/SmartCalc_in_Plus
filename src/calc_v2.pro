QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ConsoleView/ConsoleViewCalc.cpp \
    ConsoleView/ConsoleViewCredit.cpp \
    ConsoleView/ConsoleViewGrafic.cpp \
    ExampleController/ExampleControllerCalc.cpp \
    ExampleModel/ExampleModelCalc.cpp \
    ExampleModel/ExampleModelCredit.cpp \
    ExampleModel/qcustomplot.cpp \
    main.cpp


HEADERS += \
    ConsoleView/ConsoleViewCalc.h \
    ConsoleView/ConsoleViewCredit.h \
    ConsoleView/ConsoleViewGrafic.h \
    ExampleController/ExampleControllerCalc.h \
    ExampleModel/ExampleModelCalc.h \
    ExampleModel/ExampleModelCredit.h \
    qcustomplot.h



FORMS += \
    ConsoleView/ConsoleVievlCredit.ui \
    ConsoleView/ConsoleViewCalc.ui \
    ConsoleView/ConsoleViewGrafic.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
