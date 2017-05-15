#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include"info.h"
#include"eingabefeld.h"
#include "key.h"
#include"benutzerhandbuch.h"
#include"uebung.h"
#include <iostream>
#include <QString>
#include <QChar>
#include <QLineEdit>
#include <QTextEdit>
#include <QMainWindow>
#include <QLayout>
#include <QWidget>
#include <QHBoxLayout>
#include<QFileDialog>
#include<QMessageBox>
#include<QTimer>
#include <stdlib.h>


int cnt;                //Variable für den Countdown

QTimer *timer;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Typo - 10 Finger Lernprogramm");

    timer= new QTimer(this);                                    //Timer für das Zeitrennen
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));

    typodb=QSqlDatabase::addDatabase("QSQLITE");                //Datenbank Objekt erzeugt bzw ein SQLite Datenbank
    typodb.setDatabaseName("D:/SQlite2/TypoDB.db");             //Pfad der Datenbank

    if (!typodb.open())
      {
         qDebug() << "Error: connection with database fail";
      }
    else
      {
         qDebug() << "Database: connection ok";
      }

    ui->label_zeit->hide();
    ui->frame_hand->hide();
    ui->frame_zeit->hide();
    ui->frame_lernen->hide();
    ui->frame_ueben->hide();
    ui->label->hide();

    keyboard = new key();
    ui->horizontalLayout->addWidget(keyboard);

    eingabe= new eingabefeld();
    ui->verticalLayout->addWidget(eingabe);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete keyboard;
    delete eingabe;
}

void MainWindow::timer_timeout()
{
    cnt--;

    ui->label_zeit->setText(QString::number(cnt)); // Aktuelle Zeit wird dem label zugewiesen

    if(cnt==0)
    {
      qDebug() <<"Zeit ist um..";
      timer->stop();
    }
}


void MainWindow::on_anmelden_clicked()
{
 login log;             // Objekt von Login erzeugen
 log.setModal(true);
 log.exec();
}

void MainWindow::on_optionen_clicked()
{
  info inf;
  inf.setModal(true);
  inf.exec();
}

void MainWindow::on_lernen_clicked()
{
  ui->frame_hand->show();
  ui->frame_lernen->hide();
  ui->frame_zeit->hide();
  ui->frame_ueben->hide();
}

void MainWindow::on_bl_zeige_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 1; // Random zwischen 1-5

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");  //Dem SQL Befehl wird eine Variable aus dem Programm zugewiesen
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();       //Der aus der MYSQL Datenbank entnomme Text wird in einen QString gespeichtert und anschließent ausgegeben
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}
void MainWindow::on_bl_mittel_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 6; // Random zwischen 6-10

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_bl_ring_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 11; // Random zwischen 11-15

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_bl_kleiner_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 16; // Random zwischen 16-20

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_br_zeige_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 21; // Random zwischen 21-25

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_br_mittel_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 26; // Random zwischen 26-30

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_br_ring_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 31; // Random zwischen 31-35

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_br_kleiner_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 36; // Random zwischen 36-40

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
   }

}

void MainWindow::on_button_uebungende_clicked()
{
  ui->frame_lernen->hide();
  ui->frame_menue->show();
  ui->label_zeit->setText("Los Geht's!");
  ui->label_zeit->hide();
  ui->label->hide();
}


void MainWindow::on_ueben_clicked()
{
  ui->frame_ueben->show();
  ui->frame_hand->hide();
  ui->frame_zeit->hide();
  ui->frame_lernen->hide();
}

void MainWindow::on_pushButton_starten_clicked()
{
  ui->frame_ueben->hide();
  ui->frame_lernen->show();
  ui->textBrowser->setText("Übung");
  ui->frame_menue->hide();

}

void MainWindow::on_pushButton_eigener_clicked()
{
    //Eigener Text
   QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "Text File (*.txt)");       // Eigene txt Datein können entnommen werden, Starverzeichnis ist C
    QFile inputFile(filename);

    if (inputFile.open(QIODevice::ReadOnly))
    {
       QString line;
       QTextStream in(&inputFile);
       do
        {
           ui->textBrowser->setText(line);
           ui->frame_lernen->show();
           ui->frame_ueben->hide();
           ui->frame_menue->hide();
           line = in.readLine();


        }while(!line.isNull());
              inputFile.close();
    }
}

void MainWindow::on_pushButton_zeitstart_clicked()
{
  ui->label_zeit->show();
  ui->label->show();
  ui->label_zeit->setText("Los Geht's!");
  timer->stop();

     if (ui->radioButton_1->isChecked())        // 1 Minute Zeit
        {
            cnt =60;
        }
     else if (ui->radioButton_2->isChecked())   // 2 Minute Zeit
        {
            cnt =120;
        }
     else if (ui->radioButton_3->isChecked())   // 3 Minute Zeit
        {
            cnt =180;
        }
     else if (ui->radioButton_5->isChecked())   // 5 Minute Zeit
        {
            cnt =300;
        }
  timer->start();                               //Zeitrennen starten
  ui->frame_lernen->show();
  ui->textBrowser->setText("Übung Zeit");
  ui->frame_zeit->hide();
  ui->frame_menue->hide();
}

void MainWindow::on_zeitrennen_clicked()
{
  ui->frame_zeit->show();
  ui->frame_hand->hide();
  ui->frame_lernen->hide();
  ui->frame_ueben->hide();

}

void MainWindow::on_b_buch_clicked()
{
  Benutzerhandbuch ben;
  ben.setModal(true);
  ben.exec();
}
