#-------------------------------------------------
#
# Project created by QtCreator 2013-09-19T14:48:43
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = QTcpServerThreadPool
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myserver.cpp \
    myrunnable.cpp

HEADERS += \
    myserver.h \
    myrunnable.h
