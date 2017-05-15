#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <key.h>
#include"uebung.h"
#include <Windows.h>
#include <QtCore>
#include "eingabefeld.h"
#include "uebung.h"
#include <QObject>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    w.show();
    eingabefeld e;
    uebung z;

    QObject::connect(&e,SIGNAL(signal_taste(int)),&z,SLOT(signals_taste(int)));
    QObject::connect(&z,SIGNAL(s_ts_tast(int,int)),&z,SLOT(s_tts_tast(int,int)));
    QObject::connect(&z,SIGNAL(Tog(QString*,int,int)),&z,SLOT(s_tts_tast(QString&,int,int)));

    return a.exec();
}
