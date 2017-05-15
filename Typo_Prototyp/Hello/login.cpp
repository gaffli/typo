#include "login.h"
#include "ui_login.h"
#include "registrieren.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("Anmelden");
    ui->lab_status->hide();

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

login::~login()
{
    delete ui;
}

void login::on_abbrechen_anmelden_clicked()
{
   ui->lab_status->hide();
   this->close();
}

void login::on_registrieren_clicked()
{
   registrieren reg;
   reg.setModal(true);
   reg.exec();
}

void login::on_but_anmelden_clicked()
{
    QString benutzername, passwort;

    benutzername=ui->le_benutzername->text();
    passwort=ui->le_passwort->text();

    QSqlQuery qry;

    if (qry.exec("select * from Benutzer where Benutzername='"+ benutzername +"'and  Passwort='"+passwort +"'"))    //Eingabe überprüfen ob sie mit der Datenbank übereinstimmt
    {
        int count=0;
        while (qry.next())
            {
             count ++;
            }
       if(count==1)
            {
               this->close();
            }
       else
            {
             ui->lab_status->show();
             ui->lab_status->setText("Passwort oder Benutzer stimmen nicht überein.");
            }
    }
}
