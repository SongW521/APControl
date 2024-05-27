QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DEFINES -= UNICODE

LIBS += -lsetupapi

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CtrlCommand.cpp \
    HidApi.cpp \
    hidconnect.cpp \
    main.cpp \
    apwidget.cpp \
    recthread.cpp

HEADERS += \
    CtrlCommand.h \
    HidApi.h \
    apwidget.h \
    hidconnect.h \
    recthread.h

FORMS += \
    apwidget.ui

INCLUDEPATH += D:/Qt/6.5.3/mingw_64/include

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
