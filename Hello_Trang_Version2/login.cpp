#include "login.h"
#include "ui_login.h"
using namespace std;




login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("Anmelden");
    ui->lab_status->hide();
    ui->reg_status->hide();
    ui->frame_profil->hide();


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


void login::on_pb_abmelden_clicked()
{

}

void login::on_pb_zurueck_clicked()
{

this->hide();
    //labelname übertragen Lennart
    //Es gibt ein Label "label_username" in der Form Login(also hier). Deren Inhalt würde ich gerne in einem Label auf dem Mainwindow haben(name des labels ist auch label_username)


}

void login::on_button_registrieren_clicked()
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

     QSqlQuery qry_reg1;
         if (qry_reg1.exec("select Benutzername from Benutzer where Benutzername='"+ benutzername +"'"))    //Eingabe überprüfen ob der Benutzer schon verfügbar ist.
           {
               int count=0;
            while (qry_reg1.next())
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
               QSqlQuery qry_reg2;
               qry_reg2.exec("insert into Benutzer (Benutzername, Passwort, Mail) values ('"+ benutzername +"','"+passwort +"','"+email+"')");
               ui->reg_status->setText("Sie haben sich erfolgreich registriert");
               ui->reg_status->show();
               ui->button_registrieren->hide();

            }
          }
   }
}

void login::on_but_anmelden_clicked()
{

    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

    QString benutzername, passwort;

    benutzername=ui->le_benutzername->text();
    passwort=ui->le_passwort->text();

    QSqlQuery qry_login;

    if (qry_login.exec("select * from Benutzer where Benutzername='"+ benutzername +"'and  Passwort='"+passwort +"'"))    //Eingabe überprüfen ob sie mit der Datenbank übereinstimmt
    {
        int count=0;
        while (qry_login.next())
            {
             count ++;
            }
       if(count==1)
            {
           ui->frame_login->hide();
           ui->frame_profil->show();
           ui->label_username->setText(benutzername);
           emit signal_username_set(benutzername);

           // ab hier eignene funktion mit benutzername = login::benutzername etc.
            qry_login.exec("select COUNT(Art) from Statistik where Art='zeit' and Benutzername='"+ benutzername +"'");
            while (qry_login.next())
            ui->label_modizeit->setText(qry_login.value(0).toString());

            qry_login.exec("select COUNT(Art) from Statistik where Art='ueben' and Benutzername='"+ benutzername +"'");
            while (qry_login.next())
            ui->label_modiueben->setText(qry_login.value(0).toString());

            qry_login.exec("select COUNT(Art) from Statistik where Art='wett' and Benutzername='"+ benutzername +"'");
            while (qry_login.next())
            ui->label_modiwett->setText(qry_login.value(0).toString());

            qry_login.exec("select AVG(FPM) from Statistik where Benutzername='"+ benutzername +"'");
            while (qry_login.next())
            ui->label_fpm->setText(qry_login.value(0).toString());

            qry_login.exec("select AVG(WPM) from Statistik where Benutzername='"+ benutzername +"'");
            while (qry_login.next())
            ui->label_wpm->setText(qry_login.value(0).toString());


            }
       else
            {
             ui->lab_status->show();
             ui->lab_status->setText("Passwort oder Benutzer stimmen nicht überein.");

            }
    }
}
