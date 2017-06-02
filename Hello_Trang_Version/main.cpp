#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <key.h>

#include <Windows.h>
#include <QtCore>

#include <QObject>


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    w.show();

    return a.exec();
}
