#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <key.h>
#include <Windows.h>
#include <QtCore>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();





    return a.exec();
}
