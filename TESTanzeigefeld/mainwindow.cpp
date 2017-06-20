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

    MainWindow::line.append("abcd EFGHI jklm NOPQ rstv UVW xyz");  // zum testen noch hier drin, später löschen
                                            // wenn dann code zusammegeführt wird mit f3 alle lines durch texte ersetzen bzw zeile 24 entkommentieren
                                            // ACHTUNG: auch im header des ding durch texte ersetz
    ui->setupUi(this);
    ui->textBrowser->setText(line); // bei einfügen ins mainwindow ist das gleich die variable für den text
    qApp->installEventFilter(this);  // Hello World
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
        QKeyEvent *ke = (QKeyEvent *) event;
        taste = ke->text();
        ui->textBrowser_2->setText(taste);
        if(zaehler == 0)
        {
            if (taste == "A" || taste == "B" || taste == "C" || taste == "D" || taste == "E" || taste == "F" || taste == "G" || taste == "H"
                    || taste == "I" || taste == "J" || taste == "K" || taste == "L" || taste == "M" || taste == "N" || taste == "O" || taste == "P" || taste == "Q"
                    || taste == "R" || taste == "S" || taste == "T" || taste == "U" || taste == "V" || taste == "W" || taste == "X" || taste == "Y" || taste == "Z")
            {
                zaehler = 1;
                MainWindow::Vergleich();
            }
            if (taste == Qt::Key_Space || taste == "a" || taste == "b" || taste == "c" || taste == "d" || taste == "e" || taste == "f" || taste == "g" || taste == "h"
                    || taste == "i" || taste == "j" || taste == "k" || taste == "l" || taste == "m" || taste == "n" || taste == "o" || taste == "p" || taste == "q" ||
                    taste == "r" || taste == "s" || taste == "t" || taste == "u" || taste == "v" || taste == "w" || taste == "x" || taste == "y" || taste == "z")
            {
                zaehler = 1;
                MainWindow::Vergleich();
            }
        }
        else if (zaehler = 1)
        {
            zaehler = 0;
        }
        return QObject::eventFilter(obj, event);

    }
    else
    {
        return QObject::eventFilter(obj, event);
    }
}

void MainWindow::Vergleich()
{
    linewert = MainWindow::line.at(spacezaehler).toLatin1();
    tippwert = taste.at(0).toLatin1();
    ui->spinBox->setValue(linewert);

    if (linewert == tippwert )
    {
        spacezaehler ++;
        ui->spinBox->setValue(tippwert);
        if (tippwert == 32)
        {
            MainWindow::line.remove(0,spacezaehler);
            ui->textBrowser->setText(MainWindow::line);
            spacezaehler = 0;
        }
    }
}




