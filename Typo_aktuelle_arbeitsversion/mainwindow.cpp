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
#include <QKeyEvent>
#include <time.h>
#include <QTime>
#include <QTableWidget>




QTimer *timer;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    MainWindow::setFixedSize(1280,720);
    ui->setupUi(this);
    this->setWindowTitle("Typo - 10 Finger Lernprogramm");
    ///Timer für das Zeitrennen
    timer= new QTimer(this);
    timer->setInterval(1000); //Interval auf 1 sek setzen

    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    connect(&s,SIGNAL(signal_txt_nmbr(int)),this,SLOT(multi_txt_nmbr(int)));
    connect(this,SIGNAL(multipl_fpm_wpm(int,int)),&s,SLOT(set_variables(int,int)));
    connect(&s,SIGNAL(signal_other_f_w_pm(int,int)),this,SLOT(wpm_fpm_gegner_multi(int,int)));

     /// Der Pfad der Exe wird genommen um das Banner zu finden
    QString imagePath = QCoreApplication::applicationDirPath() + "/banner.png";
    QPixmap image(imagePath);
    ui->label_banner_typo->setPixmap(image);


    ui->label_username->setText("");
    ui->label_username->hide();
    ui->frame_welcome->show();
    ui->ueben->setEnabled(false);
    ui->zeitrennen->setEnabled(false);
    ui->multiplayer->setEnabled(false);
    ui->pb_profil_2->hide();
    ui->label_zeit->hide();
    ui->frame_zeitvorbei->hide();
    ui->frame_hand->hide();
    ui->frame_zeit->hide();
    ui->frame_lernen->hide();
    ui->frame_wettkampf->hide();
    ui->frame_ueben->hide();
    ui->label->hide();
    ui->pb_profil->hide();
    MainWindow::table_fehler.setColumnCount(1);

    keyboard = new key();
    ui->horizontalLayout->addWidget(keyboard);
    fehlersuche = new Fehleranalyse();

    connect(fehlersuche,SIGNAL(wrong_word(QString,QString*,int)),this,SLOT(after_writing(QString,QString*,int)));
    setFocusPolicy(Qt::StrongFocus);
    qApp->installEventFilter(this);

    ///Verbindung zur MYSQL Datenbank
    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
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
    MainWindow::cnt--;
    /// Aktuelle Zeit wird dem label zugewiesen
    ui->label_zeit->setText(QString::number(MainWindow::cnt));

    if(MainWindow::cnt==0)
    {
      timer->stop();
       ui->table_fehler->setModel(&(MainWindow::table_fehler));
      if(MainWindow::art=="wett")
      {
      ui->frame_wettkampf->show();
      ui->frame_zeittext->hide();
      ui->frame_lernen->hide();
      ui->frame_textueben->hide();
      ui->frame_zeitvorbei->show();

      int woerter=fehlersuche->NumberofCorrectWords;
      int fehler=fehlersuche->NumberofErrors;

      woerter=woerter/teiler;
      fehler=fehler/teiler;

      ui->label_fpm->setNum(fehler);
      ui->label_wpm->setNum(woerter);
      QString name=ui->label_username->text();
      QString fpm=ui->label_fpm->text();
      QString wpm=ui->label_wpm->text();
      QSqlQuery qry;
      qry.exec("insert into Statistik (Benutzername, Art, FPM, WPM) values ('"+name +"','"+MainWindow::art +"','"+fpm+"','"+ wpm +"')");


     emit MainWindow::multipl_fpm_wpm(fehler,woerter);

      }else
      {
      ui->frame_zeittext->show();
      ui->frame_lernen->hide();
      ui->frame_textueben->hide();
      ui->frame_zeitvorbei->show();

      int woerter=fehlersuche->NumberofCorrectWords;
      int fehler=fehlersuche->NumberofErrors;
      ///Die Anzahl der Wörter werden durch 1,2,3,5 geteilt je nach auswahl der Zeitübung
      woerter=woerter/teiler;
      fehler=fehler/teiler;

      ui->label_fpm->setNum(fehler);
      ui->label_wpm->setNum(woerter);
      QString name=ui->label_username->text();
      QString fpm=ui->label_fpm->text();
      QString wpm=ui->label_wpm->text();
      QSqlQuery qry;
      qry.exec("insert into Statistik (Benutzername, Art, FPM, WPM) values ('"+name +"','"+MainWindow::art +"','"+fpm+"','"+ wpm +"')");
      }


}
}


void MainWindow::on_anmelden_clicked()
{

    ui->frame_hand->hide();
    ui->frame_welcome->show();


         login log;
         log.setModal(true);
         QObject::connect(&log,SIGNAL(signal_username_set(QString)),this,SLOT(on_label_username_set_user(QString)));
         QObject::connect(&log,SIGNAL(after_login_process()),this,SLOT(after_login_process()));
         QObject::connect(&log,SIGNAL(after_logout_process()),this,SLOT(after_logout_process()));
         log.exec();
         MainWindow::benutzername = log.get();
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
  ui->frame_welcome->hide();


  typodb=QSqlDatabase::addDatabase("QSQLITE");
  ///Verbindung zur SQLite Datenbank
  /// Pfad der Datenbank wird im Ornder der Exe gesucht
  QString dbPath = QCoreApplication::applicationDirPath() + "/TypoDB.db";
  typodb.setDatabaseName(dbPath);
  typodb.open();




}

void MainWindow::on_bl_zeige_clicked()
{  
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd=rand() % 5 + 1; /// Random zwischen 1-5
  rnd=rand() % 5 + 1;

  ///Dem SQL Befehl wird eine Variable aus dem Programm zugewiesen
  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
        ///Der aus der MYSQL Datenbank entnomme Text wird in einen QString gespeichtert und anschließent ausgegeben
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);

       ui->eingabefeld->setFocus();
     MainWindow::art="lernen";


       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}
void MainWindow::on_bl_mittel_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 6;
  rnd=rand() % 5 + 6;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
        ui->eingabefeld->setFocus();

         MainWindow::art="lernen";
       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_bl_ring_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 11;
  rnd=rand() % 5 + 11;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
      MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_bl_kleiner_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 16; // Random zwischen 16-20
  rnd=rand() % 5 + 16;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
      MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_br_zeige_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 21; // Random zwischen 21-25
  rnd=rand() % 5 + 21;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
       MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_br_mittel_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 26; // Random zwischen 26-30
  rnd=rand() % 5 + 26;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
       MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_br_ring_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 31; // Random zwischen 31-35
  rnd=rand() % 5 + 31;
  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
       MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_br_kleiner_clicked()
{
  ui->frame_hand->hide();
  ui->frame_menue->hide();
  int rnd;
  rnd=rand() % 5 + 36; // Random zwischen 36-40
  rnd=rand() % 5 + 36;

  QSqlQuery query;
  query.prepare("select Texte from lernen where ID_lernen=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("texte")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
      MainWindow::art="lernen";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }

}

void MainWindow::on_button_uebungende_clicked()
{
  ui->frame_lernen->hide();
  ui->frame_menue->show();
  ui->label_zeit->setText("Los Geht's!");
  ui->textBrowser->setText("");
  ui->eingabefeld->setText("");
  ui->label_zeit->hide();
  ui->label->hide();
  ui->label_fehler->setText("0");
  ui->label_WPM->setText("0");
  MainWindow::art="";
  ui->frame_welcome->show();
  timer->stop();

  ui->table_fehler->setModel(&(MainWindow::table_fehler));

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
  ui->frame_welcome->hide();
}

void MainWindow::on_pushButton_starten_clicked()
{
    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

  ui->frame_ueben->hide();
  ui->frame_lernen->show();
  ui->frame_menue->hide();
  int rnd=rand() % 5 + 1; // Random zwischen 1-5
  rnd=rand() % 5 + 1;

  QSqlQuery query;
  query.prepare("select Text from Texte where Textart='ueben' and ID_Texte=?");
  query.addBindValue(rnd);
  query.exec();

   QSqlRecord record=query.record();
   while (query.next())
   {
       text=query.value(record.indexOf("Text")).toString();
       ui->frame_lernen->show();
       ui->textBrowser->setText(text);
      MainWindow::art="ueben";
        ui->eingabefeld->setFocus();

       if(!fehlersuche->IsRunning())
         {
          fehlersuche->start(text);
         }
   }



}

void MainWindow::on_pushButton_eigener_clicked()
{
    ///Eigener Text
    /// Eigene txt Datein können entnommen werden, Starverzeichnis ist C
   QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "Text File (*.txt)");
    QFile file(filename);

    /// Als Text-Datei nur zum Lesen öffnen
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    text=QLatin1String (file.readAll());
    file.close(); // Datei wieder schließen

    if (text.size() != 0)
      {
    ui->eingabefeld->setFocus();
    ui->textBrowser->setText(text);
    int woerter=fehlersuche->NumberofCorrectWords;
    int fehler=fehlersuche->NumberofErrors;
   ui->label_fpm->setNum(fehler);
   ui->label_wpm->setNum(woerter);
  MainWindow::art="eigener";


           ui->frame_lernen->show();
           ui->frame_ueben->hide();
           ui->frame_menue->hide();
           ui->frame_welcome->hide();

           if(!fehlersuche->IsRunning())
             {
              fehlersuche->start(text);
             }
      }





}
void MainWindow::on_pushButton_zeitstart_clicked()
{
    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

  ui->label_zeit->show();
  ui->label->show();
  ui->label_zeit->setText("Los Geht's!");
  ui->frame_welcome->hide();


  timer->stop();

     if (ui->radioButton_1->isChecked())        /// 1 Minute Zeit
        {
            MainWindow::cnt =60;
             MainWindow::teiler=1;
             MainWindow::art="zeit";
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
                 text=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               ///Zeitrennen starten
                 ui->textBrowser->setText(text);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(text);
                   }


             }
        }
     else if (ui->radioButton_2->isChecked())   /// 2 Minute Zeit
        {
            MainWindow::cnt =12;
             MainWindow::teiler=2;
             MainWindow::art="zeit";
            int rnd=rand() % 5 + 11; /// Random zwischen 11-15
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
                 text=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               ///Zeitrennen starten
                 ui->textBrowser->setText(text);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(text);
                   }
             }
        }
     else if (ui->radioButton_3->isChecked())   /// 3 Minute Zeit
        {
            MainWindow::cnt =180;
             MainWindow::teiler=3;
             MainWindow::art="zeit";
            int rnd=rand() % 5 + 16; /// Random zwischen 16-20
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
                 text=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               ///Zeitrennen starten
                 ui->textBrowser->setText(text);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(text);
                   }
             }
        }
     else if (ui->radioButton_5->isChecked())   /// 5 Minute Zeit
        {
            MainWindow::cnt =300;
             MainWindow::teiler=5;
             MainWindow::art="zeit";
            int rnd=rand() % 5 + 21;
            rnd=rand() % 5 + 21; /// Random zwischen 21-25

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
                 text=query.value(record.indexOf("Text")).toString();
                 ui->frame_lernen->show();
                 timer->start();                               ///Zeitrennen starten
                 ui->textBrowser->setText(text);
                  ui->eingabefeld->setFocus();
                 if(!fehlersuche->IsRunning())
                   {
                    fehlersuche->start(text);
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
  ui->frame_welcome->hide();
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

  /// Wenn das Anzeigefeld leer ist, also der gesamte Text bereits eingegeben wurde,
  /// dann wird die Fehleranalyse direkt beendet ohne die Eingaben des Benutzers zu analysieren.
  /// Und das Eingabefeld wird zurückgesetzt.
  if(ui->textBrowser->toPlainText() == "")
  MainWindow::text_run = false;
  else
  MainWindow::text_run = true;

  if(MainWindow::text_run == false)
    {
      ui->eingabefeld->setText(typedwords.mid(typedwords.size()-1));
      return;
  }

/// wenn das letzte eingegebene Zeichen ein Leerzeichen ist, wird die if-Bedingung ausgelöst.
  if(typedwords.at(typedwords.length() - 1) == ' ')
    {
      int counter = 0;
      int firstSpace = -1;
      /// In dieser Schleife wird ermittelt, an welcher Position i das erste Mal vom Benutzer ein Leerzeichen für sein neues Wort
      /// getippt wird.
      /// Wenn ein Leerzeichen gedrückt wurde, dann wird der counter immer auf 1 sein.
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
/// Wenn das einzige eingegebene Zeichen ein Leerzeichen war, wird der Fehlerzähler hochgezählt,
/// das Eingabefeld wird zurückgesetzt und die Funktion beendet.
      if(typedwords.size() == 1 && typedwords.at(typedwords.size()-1) == ' ')
      {
          ui->eingabefeld->setText(typedwords.mid(firstSpace + 1));
          fehlersuche->NumberofErrors++;
          int fehler=fehlersuche->NumberofErrors;
          ui->label_fehler->setNum(fehler);
          return;
      }
/// Wenn ein Leerzeichen gedrückt wurde, dann springt man in diese if-Bedingung rein.
/// Hier wird im Eingabefeld das Wort links vom Leerzeichen gelöscht, damit wir ein dynamisches Eingabefeld haben.
      if(counter >=1)
        {
          QString tmpString = typedwords.left(firstSpace); /// Das Wort links vom Leerzeichen kommt in ein temporären String
          ui->eingabefeld->setText(typedwords.mid(firstSpace + 1)); /// Dann wird das Eingabefeld neu gesettet, also alles vor dem ersten Leerzeichen wird gelöscht.
          fehlersuche->analyse(tmpString); /// Das Wort im temporären String wird dann zur Fehlersuche in die anaylse-Funktion gesendet
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

void MainWindow::on_pB_ende_clicked()
{
   /// Wenn der Button "Übungen beenden" geklickt wird, kommt man zurück ins Hauptmenü
    ui->frame_lernen->hide();
    ui->frame_zeitvorbei->hide();
    ui->frame_menue->show();
    ui->label_zeit->setText("Los Geht's!");
    ui->label_zeit->hide();
    ui->eingabefeld->setText("");
    ui->label->hide();
    ui->frame_wettkampf->hide();
    ui->frame_welcome->show();
    ui->label_fehler->setText("0");
    ui->label_WPM->setText("0");
    ui->label->hide();
    if(fehlersuche->IsRunning())
      {
        fehlersuche->end();
        ui->eingabefeld->clear();

      }
}

void MainWindow::after_login_process()
{
    ui->anmelden->hide();
    ui->ueben->setEnabled(true);
    ui->zeitrennen->setEnabled(true);
    ui->multiplayer->setEnabled(true);
    ui->pb_profil->show();
    ui->pb_profil_2->show();
}

void MainWindow::after_logout_process()
{
    ui->anmelden->show();
    ui->ueben->setEnabled(false);
    ui->zeitrennen->setEnabled(false);
    ui->multiplayer->setEnabled(false);
    ui->label_username->setText("");
    ui->pb_profil->hide();
    ui->pb_profil_2->hide();

}

void MainWindow::on_pb_profil_clicked()
{
    /// Es wird ein Objekt der Klasse Login erzeugt und über Singal und Slots das Profil des Nutzer aufgerufen mit seinem Übungsstand
    login log;
    log.setModal(true);
    QString name = MainWindow::benutzername;
    log.set(name);
       QObject::connect(this,SIGNAL(profil_show_and_hide()),&log,SLOT(profil_show_and_hide()));
       QObject::connect(&log,SIGNAL(after_logout_process()),this,SLOT(after_logout_process()));
       emit profil_show_and_hide();
       log.exec();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) ///In dieser Funktion, werden die eingegebenen Tasten ausgelesen und in einen Integer gecastet
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

void MainWindow::Vergleich() ///In dieser Funktion, werden die ausgelesen. In der ersten if-Anweisung wird der Counter hochgezählt falls ein Buchstabe eingegeben wurde und in der zweiten if-Anweisung
///wird der eingebene Text aus dem Anzeigefeld gelöscht, falls ein Leerzeichen getippt wurde
{
    int spacezaehler;
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
                ende = false;
                }
                else
                {
                    zaehler++;
                    ende = true;
                    break;
                }
            }while(v[0] != Qt::Key_Space);
            text.remove(0,zaehler);
            ui->textBrowser->setText(text);
            spacezaehler = 0;
        }
    if(ende==true) ///Falls der Text abgetippt wurde, wird diese If-Schleife ausgeführt um anschließend, die Statisitk am Ende einer jeden Übung auszugeben
    {
        int woerter=fehlersuche->NumberofCorrectWords;
        int fehler=fehlersuche->NumberofErrors;
        ui->label_wpm->setNum(woerter);
        ui->label_fpm->setNum(fehler);
        QString name=ui->label_username->text();
         ui->table_fehler->setModel(&(MainWindow::table_fehler));
                 ui->frame_lernen->hide();
                 ui->frame_zeitvorbei->show();
                 ui->frame_textueben->show();
                 ui->frame_zeittext->hide();



           QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
           typo_db.setDatabaseName("typo");
           typo_db.setUserName("Alex");
           typo_db.setPassword("A92K07!27");
           typo_db.setPort(3306);
           typo_db.setHostName("89.163.178.19");
           typo_db.open();


            QString fpm=ui->label_fpm->text();
            QString wpm=ui->label_wpm->text();
            QSqlQuery qry;
            qry.exec("insert into Statistik (Benutzername, Art, FPM, WPM) values ('"+name +"','"+MainWindow::art +"','"+fpm+"','"+ wpm +"')");

       ende=false;
        }

}

void MainWindow::on_pb_profil_2_clicked()
{
    login log;
    log.setModal(true);
    QString name = MainWindow::benutzername;
    log.set(name);
    QObject::connect(this,SIGNAL(profil_show_and_hide()),&log,SLOT(profil_show_and_hide()));
    QObject::connect(&log,SIGNAL(after_logout_process()),this,SLOT(after_logout_process()));
    emit profil_show_and_hide();
    log.exec();
}

void MainWindow::multi_txt_nmbr(int txt_nmbr)
{
    ui->frame_hand->hide();
    ui->frame_lernen->hide();
    ui->frame_ueben->hide();
    ui->frame_welcome->hide();
    ui->frame_lernen->show();
    ui->frame_menue->hide();

    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

   MainWindow::rnd_multi = txt_nmbr;


    MainWindow::cnt =60;
    ui->label_zeit->show();
    QSqlQuery query;
    query.prepare("select Text from Texte where Textart='zeit2' and ID_Texte=?");
    query.addBindValue(MainWindow::rnd_multi);
    query.exec();

     QSqlRecord record=query.record();
     while (query.next())
     {
         qDebug() << "started";
         text=query.value(record.indexOf("Text")).toString();
         ui->frame_lernen->show();
         ui->label->show();
         timer->start();
         ui->textBrowser->setText(text);
         ui->eingabefeld->setFocus();
         if(!fehlersuche->IsRunning())
           {
            qDebug() << "fehler ana started";
            fehlersuche->start(text);
           }
     }
}

void MainWindow::on_multiplayer_clicked()
{
    MainWindow::art="wett";
    MainWindow::teiler=1;
    MainWindow::is_multipl = true;
    MainWindow::s.doConnect();

}

void MainWindow::wpm_fpm_gegner_multi(int fpm_other, int wpm_other)
{
    ui->label_wpm_gegner->setNum(wpm_other);
    ui->label_fpm_gegner->setNum(fpm_other);
}

void MainWindow::after_writing(QString wrong_word, QString * right_word, int failed_count)
{
    QString rightw = 0;
    QString wrongw = 0;
    wrongw = wrong_word;
    rightw = *right_word;
    MainWindow::table_fehler.setRowCount(failed_count - 1);
    QStandardItem wrong(wrongw);
    QStandardItem right(rightw);
    MainWindow::table_fehler.setItem(failed_count,1,&wrong);
    MainWindow::table_fehler.setItem(failed_count,2,&right);
}
