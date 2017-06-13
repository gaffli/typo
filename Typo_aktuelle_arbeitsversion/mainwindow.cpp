#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include"info.h"
#include "key.h"
#include"benutzerhandbuch.h"
#include"fehleranalyse.h"
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
#include<QTextCodec>
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

    ui->label_zeit->hide();
    ui->frame_zeitvorbei->hide();
    ui->frame_hand->hide();
    ui->frame_zeit->hide();
    ui->frame_lernen->hide();
    ui->frame_ueben->hide();
    ui->label->hide();

    keyboard = new key();
    ui->horizontalLayout->addWidget(keyboard);
    fehlersuche = new Fehleranalyse();

    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();



}

MainWindow::~MainWindow()
{
    delete ui;
    delete keyboard;
    delete fehlersuche;

}

void MainWindow::timer_timeout()
{
    cnt--;

    ui->label_zeit->setText(QString::number(cnt)); // Aktuelle Zeit wird dem label zugewiesen

    if(cnt==0)
    {
      timer->stop();
      ui->frame_zeitvorbei->show();
      ui->frame_lernen->hide();

      int woerter=fehlersuche->NumberofCorrectWords;
      int fehler=fehlersuche->NumberofErrors;

       QString art;
      int teiler=0;
      if (ui->radioButton_1->isChecked())              // 1 Minute Zeit
         {
          teiler=60;
          art="zeit";
         }
      else if (ui->radioButton_2->isChecked())        // 2 Minute Zeit
         {
          teiler=120;
           art="zeit";
         }
      else if (ui->radioButton_3->isChecked())        // 3 Minute Zeit
         {
          teiler=180;
          art="zeit";

         }
      else if (ui->radioButton_5->isChecked())        // 5 Minute Zeit
         {
          teiler=300;
          art="zeit";

         }

      //woerter=woerter/teiler;
      //fehler=fehler/teiler;
      ui->label_fpm->setNum(fehler);
      ui->label_wpm->setNum(woerter);
      QString name;
      name=ui->label_username->text();
      QString fpm;
      QString wpm;
    fpm=ui->label_fpm->text();
    wpm=ui->label_wpm->text();
     QSqlQuery qry;
      qry.exec("insert into Statistik (Benutzername, Art, FPM, WPM) values ('"+name +"','"+art +"','"+fpm+"','"+ wpm +"')");

}
}


void MainWindow::on_anmelden_clicked()
{
 login log;
 log.setModal(true);
 QObject::connect(&log,SIGNAL(signal_username_set(QString)),this,SLOT(on_label_username_set_user(QString)));
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


   QDir dir("C:/test");
   QString s= dir.relativeFilePath("test/Datenbank/TypoDB.db");
QString dbPath = QCoreApplication::applicationDirPath() + "/TypoDB.db";

  typodb=QSqlDatabase::addDatabase("QSQLITE");                //Datenbank Objekt erzeugt bzw ein SQLite Datenbank

 qDebug() << dbPath;
  typodb.setDatabaseName(dbPath);
                                                                  //Pfad der Datenbank "D:/SQlite2/TypoDB.db"
  typodb.open();




}

void MainWindow::on_bl_zeige_clicked()
{  
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd=rand() % 5 + 1; // Random zwischen 1-5

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

       ui->eingabefeld->setFocus();



       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
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
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
   }

}

void MainWindow::on_button_uebungende_clicked()
{
  ui->frame_lernen->hide();
  ui->frame_menue->show();
  ui->label_zeit->setText("Los Geht's!");
  ui->label_zeit->hide();
  ui->label->hide();
  ui->label_fehler->setText("0");
  ui->label_WPM->setText("0");
  if(fehlersuche->IsRunning())
    {
      fehlersuche->end();
      ui->eingabefeld->clear();

    }
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
  ui->frame_menue->hide();
  int rnd=1;

  QSqlQuery query;
  query.prepare("select Text from Texte where Textart='ueben' and ID_Texte='1'");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       QString texte=query.value(record.indexOf("Text")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(texte);
        ui->eingabefeld->setFocus();
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(texte);
         }
   }



}

void MainWindow::on_pushButton_eigener_clicked()
{
    //Eigener Text
   QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "Text File (*.txt)");       // Eigene txt Datein können entnommen werden, Starverzeichnis ist C
    QFile file(filename);

    file.open(QIODevice::ReadOnly | QIODevice::Text); // Als Text-Datei nur zum Lesen öffnen
    QString text=QLatin1String (file.readAll());
    file.close(); // Datei wieder schließen
     ui->eingabefeld->setFocus();
    ui->textBrowser->setText(text);

           ui->frame_lernen->show();
           ui->frame_ueben->hide();
           ui->frame_menue->hide();

           if(!fehlersuche->IsRunning())
             {
              fehlersuche->start(text);
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
            int rnd=rand() % 5 + 6; // Random zwischen 6-10
            rnd=rand() % 5 + 6;
            ui->frame_lernen->show();
            ui->frame_zeit->hide();
            ui->frame_menue->hide();

            QSqlQuery query;
            query.prepare("select Text from Texte where Textart='zeit1' and ID_Texte=?");
            query.addBindValue(rnd);
            query.exec();

             QSqlRecord record=query.record();
             while (query.next())
             {
                 QString texte=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               //Zeitrennen starten
                 ui->textBrowser->setText(texte);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(texte);
                   }


             }
        }
     else if (ui->radioButton_2->isChecked())   // 2 Minute Zeit
        {
            cnt =120;

            int rnd=rand() % 5 + 11; // Random zwischen 11-15
            rnd=rand() % 5 + 11;
            ui->frame_lernen->show();
            ui->frame_zeit->hide();
            ui->frame_menue->hide();

            QSqlQuery query;
            query.prepare("select Text from Texte where Textart='zeit2' and ID_Texte=?");
            query.addBindValue(rnd);
            query.exec();

             QSqlRecord record=query.record();
             while (query.next())
             {
                 QString texte=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               //Zeitrennen starten
                 ui->textBrowser->setText(texte);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(texte);
                   }
             }
        }
     else if (ui->radioButton_3->isChecked())   // 3 Minute Zeit
        {
            cnt =180;
            int rnd=rand() % 5 + 16; // Random zwischen 16-20
            rnd=rand() % 5 + 16;

            ui->frame_lernen->show();
            ui->frame_zeit->hide();
            ui->frame_menue->hide();

            QSqlQuery query;
            query.prepare("select Text from Texte where Textart='zeit3' and ID_Texte=?");
            query.addBindValue(rnd);
            query.exec();

             QSqlRecord record=query.record();
             while (query.next())
             {
                 QString texte=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               //Zeitrennen starten
                 ui->textBrowser->setText(texte);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(texte);
                   }
             }
        }
     else if (ui->radioButton_5->isChecked())   // 5 Minute Zeit
        {
            cnt =300;
            int rnd=rand() % 5 + 21;
            rnd=rand() % 5 + 21; // Random zwischen 21-25

            ui->frame_lernen->show();
            ui->frame_zeit->hide();
            ui->frame_menue->hide();

            QSqlQuery query;
            query.prepare("select Text from Texte where Textart='zeit5' and ID_Texte=?");
            query.addBindValue(rnd);
            query.exec();

             QSqlRecord record=query.record();
             while (query.next())
             {
                 QString texte=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               //Zeitrennen starten
                 ui->textBrowser->setText(texte);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(texte);
                   }
             }
        }



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

void MainWindow::on_eingabefeld_textChanged(const QString &typedwords)
{
  if(typedwords.length() == 0)
    return;

  if(typedwords.at(typedwords.length() - 1) == ' ')
    {
      int counter = 0;
      int firstSpace = -1;

      for(int i = 0; i < typedwords.length(); i++)
        {
          if(typedwords.at(i) == ' ')
            {
              counter ++;
              if(firstSpace == -1)
                {
                  firstSpace = i;
                }
            }
        }

      if(typedwords.size() == 1 && typedwords.at(typedwords.size()-1) == ' ')
      {
          ui->eingabefeld->setText(typedwords.mid(firstSpace + 1));
          fehlersuche->NumberofErrors++;
          int fehler=fehlersuche->NumberofErrors;
          ui->label_fehler->setNum(fehler);
          return;
      }

      if(counter >=1)
        {
          QString tmpString = typedwords.left(firstSpace);
          ui->eingabefeld->setText(typedwords.mid(firstSpace + 1));
          fehlersuche->analyse(tmpString);
          std::cout << "Richtige Wörter: " <<fehlersuche->NumberofCorrectWords<< std::endl;
          int woerter=fehlersuche->NumberofCorrectWords;
          ui->label_WPM->setNum(woerter);
          int fehler=fehlersuche->NumberofErrors;
          ui->label_fehler->setNum(fehler);
        }

    }
}

void MainWindow::on_label_username_set_user(QString username)
{
    this->ui->label_username->setText(username);
}
