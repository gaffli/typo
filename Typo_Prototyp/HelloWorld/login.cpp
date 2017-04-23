#include "login.h"
#include "ui_login.h"
#include "registrieren.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    typodb=QSqlDatabase::addDatabase("QSQLITE");                //Datenbank Objekt erzeugt bzw ein SQLite Datenbank
    typodb.setDatabaseName("D:/SQLite2/TypoDB.db");             //Pfad der Datenbank

    if (typodb.open())                                      // Prüfung ob die Datenbank erfolgreich verbunden wurde
        ui->lab_status->setText("Verbunden");
    else
        ui->lab_status->setText("Nicht Verbunden");
}

login::~login()
{
    delete ui;

}

void login::on_abbrechen_anmelden_clicked()
{
   this->close();

}

void login::on_registrieren_clicked()
{
   registrieren reg;        // Objekt erzeugen
   reg.setModal(true);
   reg.exec();

}

void login::on_but_anmelden_clicked()
{
    QString benutzername, passwort;

    benutzername=ui->le_benutzername->text();
    passwort=ui->le_passwort->text();

    if (!typodb.isOpen())               //Prüfung ob die Datenbank geöffnet werden konnte
    {
        qDebug()<<"Datenbank konnte nicht geöffnet werden.";
        return;
    }

    QSqlQuery qry;

    if (qry.exec("select * from userlist where Username='"+ benutzername +"'and  Passwort='"+passwort +"'"))    //Eingabe überprüfen ob sie mit der Datenbank übereinstimmt
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
           ui->lab_status->setText("Falsch");


    }


}
