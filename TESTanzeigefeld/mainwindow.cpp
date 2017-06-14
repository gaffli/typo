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

    MainWindow::line.append("abcd efghi jklmn opqr");  // zum testen noch hier drin, später löschen
                                            // wenn dann code zusammegeführt wird mit f3 alle lines durch texte ersetzen bzw zeile 24 entkommentieren
                                            // ACHTUNG: auch im header des ding durch texte ersetz


    ui->setupUi(this);
    ui->textBrowser->setText(line); // bei einfügen ins mainwindow ist das gleich die variable für den text
    qApp->installEventFilter(this);
    //QString line = texte;
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) //Von lennart übernommen gibt die Ascii codes aus der eintippten Buchstaben
                                                          //leider gibt der von ihm geschriebene Code den Ascii code nicht korekkt aus, es wird nicht zwischen Groß und Kleinbuschtaben unterschieden
{
  if (event->type() == QEvent::KeyPress)
  {

          QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event); //Aufzeichnen der eingegeben Chars
          taste = keyEvent->key();
          std::cout << taste << std::endl;
          ui->textBrowser_2->setText(QString("%1").arg(taste)); //Ausgabe auf dem Textbrowser 2
          Vergleich(taste); //Aufruf der Verlgeich und Lösch Funktion
          std::cout << "a" << std::endl;


  }


return QObject::eventFilter(obj, event);
}



void MainWindow::Vergleich(int taste)
{
    int strwert = MainWindow::line.at(0).toLatin1(); //die erste stelle des QStrings line wird hier zum ascii code umgewandelt zum vergleich
    ui->spinBox->setValue(strwert); //Wert wird in der spinbox angezeigt

    if (taste == strwert || taste == strwert - 32) // hier werden die werte taste und strwert verglichen, der zwite teil der if operation ist nötig da lennarts code noch nicht korrekt ist
    {
        MainWindow::line.remove(0,1); //Der erste Buchstabe von line wird entfernt
        ui->textBrowser->setText(MainWindow::line); //neuer text wird angezeigt
        ui->spinBox->setValue(strwert);
        ui->textBrowser_3->setText("right");
    }


}




