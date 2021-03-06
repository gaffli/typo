#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    void use_querylogin(QSqlQuery qry_login);
    void set(QString name);
    QString get();

    ~login();

signals:
void signal_username_set(QString);
    void after_login_process();
    void after_logout_process();


private slots:
    void on_abbrechen_anmelden_clicked();

    void on_pb_abmelden_clicked();

    void on_pb_zurueck_clicked();

    void on_button_registrieren_clicked();

    void on_but_anmelden_clicked();

    void profil_show_and_hide();
    void signal_sys_show();

private:
    Ui::login *ui;
    QSqlDatabase typo_db =  QSqlDatabase::addDatabase("QMYSQL");
    QSqlDatabase typodb;
    QString benutzername, passwort, email;


};

#endif // LOGIN_H
