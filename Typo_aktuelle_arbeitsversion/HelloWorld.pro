#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T02:11:44
#
#-------------------------------------------------

QT       += core gui sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    info.cpp \
    key.cpp \
    benutzerhandbuch.cpp \
    fehleranalyse.cpp \
    mytcpsocket.cpp



HEADERS  += mainwindow.h \
    login.h \
    info.h \
    key.h \
    benutzerhandbuch.h \
    fehleranalyse.h \
    mytcpsocket.h

@win32:LIBS += C:\Windows\WinSxS\wow64_microsoft-windows-kernel32_31bf3856ad364e35_10.0.14393.0_none_cb86fb0ea15eef10\kernel32@
FORMS    += mainwindow.ui \
    login.ui \
    info.ui \
    key.ui \
    benutzerhandbuch.ui
