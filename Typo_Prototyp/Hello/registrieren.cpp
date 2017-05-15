#include "registrieren.h"
#include "ui_registrieren.h"

registrieren::registrieren(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrieren)
{
    ui->setupUi(this);
    this->setWindowTitle("Registrieren");
    ui->reg_status->hide();

    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

    if(typo_db.isOpen())
        {
            qDebug() << "Datenbankverbindung zu MySQL steht ;)";
        }
    else
        {
             qDebug() << typo_db.lastError().text();
        }



}

registrieren::~registrieren()
{
    delete ui;

}

void registrieren::on_reg_zurueck_clicked()
{
    ui->reg_status->hide();
    this->close();
}

void registrieren::on_but_registrieren_clicked()
{
   QString benutzername, passwort, email;

   email=ui->reg_email->text();
   benutzername=ui->reg_benutzername->text();
   passwort=ui->reg_passwort->text();

   if(!email.contains('@') || email.size()>30)
     {
      ui->reg_status->show();
      ui->reg_status->setText("Keine Gültige E-Mail Adresse.");
     }

        else if (benutzername.size()<5 || benutzername.size()>15)
        {
        ui->reg_status->show();
        ui->reg_status->setText("Benutzername muss zwischen 5 und 15 Zeichen lang sein.");
        }
        else if (passwort.size()<4 || passwort.size()>20)
        {
        ui->reg_status->show();
        ui->reg_status->setText("Passwort muss zwischen 4 und 20 Zeichen lang sein.");
        }
   else
    {
     QSqlQuery qry;
         if (qry.exec("select Benutzername from Benutzer where Benutzername='"+ benutzername +"'"))    //Eingabe überprüfen ob der Benutzer schon verfügbar ist.
           {
               int count=0;
            while (qry.next())
                {
                    count ++;
                }
            if(count==1)
            {
                ui->reg_status->show();
                ui->reg_status->setText("Benutzer ist bereits vergeben");
            }
             else
            {
               QSqlQuery qryy;
               qryy.exec("insert into Benutzer (Benutzername, Passwort, Mail) values ('"+ benutzername +"','"+passwort +"','"+email+"')");

               this->close();
            }
          }
   }
}
