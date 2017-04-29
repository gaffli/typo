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
    ~login();

private slots:
    void on_abbrechen_anmelden_clicked();

    void on_registrieren_clicked();

    void on_but_anmelden_clicked();

private:
    Ui::login *ui;
    QSqlDatabase typodb; //Deklaration der Datenbank
};

#endif // LOGIN_H
