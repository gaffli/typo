#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include "key.h"
#include "fehleranalyse.h"
#include<QtCore>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include <QDialog>
#include <QString>
#include "mytcpsocket.h"
#include <QTableWidget>


namespace Ui {
class MainWindow;
class QWidget;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    Fehleranalyse* fehlersuche;
    ~MainWindow();
    bool eventFilter(QObject *obj, QEvent *event);
    QString text;
    bool i = false;
    MyTcpSocket s;

signals:
   void profil_show_and_hide();
      void signal_sys_show();
   void multipl_fpm_wpm(int,int);

private slots:

    void on_anmelden_clicked();

    void on_optionen_clicked();

    void on_lernen_clicked();

    void on_bl_zeige_clicked();

    void on_bl_mittel_clicked();

    void on_bl_ring_clicked();

    void on_bl_kleiner_clicked();

    void on_br_zeige_clicked();

    void on_br_mittel_clicked();

    void on_br_ring_clicked();

    void on_br_kleiner_clicked();

    void on_button_uebungende_clicked();

    void on_ueben_clicked();

    void on_pushButton_starten_clicked();

    void on_pushButton_eigener_clicked();

    void on_pushButton_zeitstart_clicked();

    void on_zeitrennen_clicked();

    void timer_timeout();

    void on_b_buch_clicked();

    void after_writing(QString, QString *, int);

    void on_eingabefeld_textChanged(const QString &typedwords);

    void on_label_username_set_user(QString username);

    void on_pB_ende_clicked();

    void after_login_process();
    void after_logout_process();

    void on_pb_profil_clicked();

    void Vergleich();

    void on_pb_profil_2_clicked();

    void on_multiplayer_clicked();
    void multi_txt_nmbr(int txt_nmbr);
    void wpm_fpm_gegner_multi(int fpm_other, int wpm_other);

private:
    Ui::MainWindow *ui;
    Ui::QWidget *Form;
    key *keyboard;
    QSqlDatabase typodb;
    QSqlDatabase typo_db;
    bool text_run;
    bool ende = false;
    QString art;
    int teiler=0;
    int tippwert;
    int spacezaehler = 0;
    int textcounter = 0;
    int zaehler = 0;
    int cnt = 0;
    int rnd_multi = 0;
    bool is_multipl = false;
    bool scnd_plr_connect = false;
     QString benutzername;
     QTableWidget table_fehler;

};

#endif // MAINWINDOW_H
