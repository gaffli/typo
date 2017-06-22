#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>
#include <QMainWindow>
#include <QTextStream>
#include <QKeyEvent>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    text = ("abcd EFGHI jklm NOPQ rstv UVW xyz");  // zum testen noch hier drin, später löschen
                                            // wenn dann code zusammegeführt wird mit f3 alle lines durch texte ersetzen bzw zeile 24 entkommentieren
                                            // ACHTUNG: auch im header des ding durch texte ersetz
    ui->setupUi(this);
    ui->textBrowser->setText(text); // bei einfügen ins mainwindow ist das gleich die variable für den text
    qApp->installEventFilter(this);
    //QString line = texte;

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent* ke = (QKeyEvent *) event;
        QByteArray byte = 0;
        QString taste = ke->text();
        byte = taste.toLatin1();
        tippwert = static_cast<quint8>(byte[0]);

        if (zaehler == 0)
        {
            Vergleich();
            zaehler = 1;
        }
        else if (zaehler != 0)
        {
            zaehler = 0;
        }
    }
    return QObject::eventFilter(obj, event);
}

void MainWindow::Vergleich()
{
    if (tippwert >= 33 && tippwert <= 126)
    {
        spacezaehler ++;
    }
    if (tippwert == 32 && spacezaehler != 0)
        {
            zaehler = 0;
            QString v;
            int textsize = text.length();
            do
            {
                if (zaehler < textsize)
                {
                v = text.at(zaehler);
                zaehler++;
                }
                else
                {
                    zaehler++;
                    break;
                }
            }while(v != Qt::Key_Space);
            text.remove(0,zaehler);
            ui->textBrowser->setText(text);
            spacezaehler = 0;
        }
}

