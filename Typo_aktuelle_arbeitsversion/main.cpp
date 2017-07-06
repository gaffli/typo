#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <key.h>
#include<QTextCodec>

#include <Windows.h>
#include <QtCore>

#include <QObject>


using namespace std;

int main(int argc, char *argv[])
{
     ///Wird benötigt damit man Umlaute darstellen kann
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UFT-8"));
    QApplication a(argc, argv);

    MainWindow w;

    w.show();

    return a.exec();
}
