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
    emit after_logout_process();
    this->hide();
}

void login::on_pb_zurueck_clicked()
{

    this->hide();

}

void login::on_button_registrieren_clicked()
{



   login::email=ui->reg_email->text();
   login::benutzername=ui->reg_benutzername->text();
   login::passwort=ui->reg_passwort->text();


   if(!login::email.contains('@') || login::email.size()>30)
     {
      ui->reg_status->show();
      ui->reg_status->setText("Keine Gültige E-Mail Adresse.");
     }

        else if (login::benutzername.size()<5 || login::benutzername.size()>15)
        {
        ui->reg_status->show();
        ui->reg_status->setText("Benutzername muss zwischen 5 und 15 Zeichen lang sein.");
        }
        else if (login::passwort.size()<4 || login::passwort.size()>20)
        {
        ui->reg_status->show();
        ui->reg_status->setText("Passwort muss zwischen 4 und 20 Zeichen lang sein.");
        }
   else
    {

     QSqlQuery qry_reg1;
         if (qry_reg1.exec("select Benutzername from Benutzer where Benutzername='"+ login::benutzername +"'"))    //Eingabe überprüfen ob der Benutzer schon verfügbar ist.
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
               qry_reg2.exec("insert into Benutzer (Benutzername, Passwort, Mail) values ('"+ login::benutzername +"','"+login::passwort +"','"+login::email+"')");
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


    login::benutzername=ui->le_benutzername->text();
    login::passwort=ui->le_passwort->text();

    if( !benutzername.isEmpty() )
        benutzername[ 0 ] = benutzername[ 0 ].toUpper();

    QSqlQuery qry_login;

    if (qry_login.exec("select * from Benutzer where Benutzername='"+ login::benutzername +"'and  Passwort='"+login::passwort +"'"))    //Eingabe überprüfen ob sie mit der Datenbank übereinstimmt
    {
        int count=0;
        while (qry_login.next())
            {
             count ++;
            }
       if(count==1)
            {
              login::use_querylogin(qry_login);
              emit login::after_login_process();
            }
       else
            {
             ui->lab_status->show();
             ui->lab_status->setText("Passwort oder Benutzer stimmen nicht überein.");

            }
    }
}

void login::use_querylogin(QSqlQuery qry_login)
{
  ui->frame_login->hide();
  ui->frame_profil->show();
  ui->label_username->setText(login::benutzername);
  emit signal_username_set(login::benutzername);

   qry_login.exec("select COUNT(Art) from Statistik where Art='zeit' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_modizeit->setNum(qry_login.value(0).toInt());

   qry_login.exec("select COUNT(Art) from Statistik where Art='ueben' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_modiueben->setText(qry_login.value(0).toString());

   qry_login.exec("select COUNT(Art) from Statistik where Art='wett' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_modiwett->setText(qry_login.value(0).toString());

   qry_login.exec("select AVG(FPM) from Statistik where Art='zeit' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_fpm->setNum(qry_login.value(0).toInt());

   qry_login.exec("select AVG(WPM) from Statistik where Art='zeit' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_wpm->setNum(qry_login.value(0).toInt());

   qry_login.exec("select COUNT(Art) from Statistik where Art='lernen' and Benutzername='"+ login::benutzername +"'");
   while (qry_login.next())
   ui->label_mdilernen->setNum(qry_login.value(0).toInt());



}

void login::profil_show_and_hide()
{

    ui->frame_login->hide();
    ui->frame_profil->show();

    typo_db.setDatabaseName("typo");
    typo_db.setUserName("Alex");
    typo_db.setPassword("A92K07!27");
    typo_db.setPort(3306);
    typo_db.setHostName("89.163.178.19");
    typo_db.open();

    QSqlQuery qry_login;

    login::use_querylogin(qry_login);
}

void login::signal_sys_show()
{
    this->show();
}

QString login::get()
{
    return(login::benutzername);
}

void login::set(QString name)
{
    login::benutzername = name;
}
