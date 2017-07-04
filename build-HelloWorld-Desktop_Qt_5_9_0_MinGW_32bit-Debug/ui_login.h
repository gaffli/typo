/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame_login;
    QLabel *lab_benutzer;
    QLabel *lab_passwort;
    QLineEdit *le_benutzername;
    QLineEdit *le_passwort;
    QLabel *lab_status;
    QPushButton *but_anmelden;
    QLabel *label;
    QFrame *line;
    QFrame *frame;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *reg_benutzername;
    QLineEdit *reg_passwort;
    QLabel *reg_status;
    QPushButton *abbrechen_anmelden;
    QPushButton *button_registrieren;
    QFrame *line_5;
    QFrame *frame_profil;
    QPushButton *pb_abmelden;
    QPushButton *pb_zurueck;
    QLabel *label_2;
    QLabel *label_username;
    QLabel *label_3;
    QLabel *label_wpm;
    QLabel *label_4;
    QLabel *label_fpm;
    QFrame *line_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_modiueben;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_mdilernen;
    QLabel *label_modiwett;
    QLabel *label_modizeit;
    QFrame *line_2;
    QFrame *line_4;
    QLabel *label_13;
    QLabel *label_eigner;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(722, 576);
        frame_login = new QFrame(login);
        frame_login->setObjectName(QStringLiteral("frame_login"));
        frame_login->setGeometry(QRect(20, 20, 680, 540));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        lab_benutzer = new QLabel(frame_login);
        lab_benutzer->setObjectName(QStringLiteral("lab_benutzer"));
        lab_benutzer->setGeometry(QRect(20, 20, 171, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lab_benutzer->setFont(font);
        lab_passwort = new QLabel(frame_login);
        lab_passwort->setObjectName(QStringLiteral("lab_passwort"));
        lab_passwort->setGeometry(QRect(20, 60, 161, 21));
        lab_passwort->setFont(font);
        le_benutzername = new QLineEdit(frame_login);
        le_benutzername->setObjectName(QStringLiteral("le_benutzername"));
        le_benutzername->setGeometry(QRect(180, 10, 270, 25));
        le_passwort = new QLineEdit(frame_login);
        le_passwort->setObjectName(QStringLiteral("le_passwort"));
        le_passwort->setGeometry(QRect(180, 60, 270, 25));
        le_passwort->setEchoMode(QLineEdit::Password);
        lab_status = new QLabel(frame_login);
        lab_status->setObjectName(QStringLiteral("lab_status"));
        lab_status->setGeometry(QRect(10, 90, 431, 41));
        but_anmelden = new QPushButton(frame_login);
        but_anmelden->setObjectName(QStringLiteral("but_anmelden"));
        but_anmelden->setGeometry(QRect(490, 20, 120, 60));
        label = new QLabel(frame_login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 160, 371, 51));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        line = new QFrame(frame_login);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 140, 671, 20));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        frame = new QFrame(frame_login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 220, 471, 181));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 40, 141, 20));
        label_10->setFont(font);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 100, 121, 20));
        label_11->setFont(font);
        reg_benutzername = new QLineEdit(frame);
        reg_benutzername->setObjectName(QStringLiteral("reg_benutzername"));
        reg_benutzername->setGeometry(QRect(170, 40, 270, 25));
        reg_passwort = new QLineEdit(frame);
        reg_passwort->setObjectName(QStringLiteral("reg_passwort"));
        reg_passwort->setGeometry(QRect(170, 100, 270, 25));
        reg_passwort->setEchoMode(QLineEdit::Password);
        reg_status = new QLabel(frame);
        reg_status->setObjectName(QStringLiteral("reg_status"));
        reg_status->setGeometry(QRect(20, 130, 491, 41));
        abbrechen_anmelden = new QPushButton(frame_login);
        abbrechen_anmelden->setObjectName(QStringLiteral("abbrechen_anmelden"));
        abbrechen_anmelden->setGeometry(QRect(240, 460, 220, 61));
        button_registrieren = new QPushButton(frame_login);
        button_registrieren->setObjectName(QStringLiteral("button_registrieren"));
        button_registrieren->setGeometry(QRect(490, 270, 120, 60));
        line_5 = new QFrame(frame_login);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 410, 681, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        frame_profil = new QFrame(login);
        frame_profil->setObjectName(QStringLiteral("frame_profil"));
        frame_profil->setGeometry(QRect(10, 10, 680, 540));
        frame_profil->setFrameShape(QFrame::StyledPanel);
        frame_profil->setFrameShadow(QFrame::Raised);
        pb_abmelden = new QPushButton(frame_profil);
        pb_abmelden->setObjectName(QStringLiteral("pb_abmelden"));
        pb_abmelden->setGeometry(QRect(530, 10, 120, 35));
        pb_zurueck = new QPushButton(frame_profil);
        pb_zurueck->setObjectName(QStringLiteral("pb_zurueck"));
        pb_zurueck->setGeometry(QRect(240, 460, 220, 61));
        label_2 = new QLabel(frame_profil);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 9, 151, 41));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_username = new QLabel(frame_profil);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(180, 10, 331, 41));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        label_username->setFont(font3);
        label_3 = new QLabel(frame_profil);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 120, 20));
        label_3->setFont(font);
        label_wpm = new QLabel(frame_profil);
        label_wpm->setObjectName(QStringLiteral("label_wpm"));
        label_wpm->setGeometry(QRect(70, 80, 101, 40));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_wpm->setFont(font4);
        label_4 = new QLabel(frame_profil);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 180, 51, 21));
        label_4->setFont(font4);
        label_fpm = new QLabel(frame_profil);
        label_fpm->setObjectName(QStringLiteral("label_fpm"));
        label_fpm->setGeometry(QRect(70, 170, 101, 40));
        label_fpm->setFont(font4);
        line_3 = new QFrame(frame_profil);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(170, 60, 20, 361));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::VLine);
        label_5 = new QLabel(frame_profil);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 70, 261, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setUnderline(true);
        font5.setWeight(75);
        label_5->setFont(font5);
        label_6 = new QLabel(frame_profil);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 125, 250, 20));
        label_6->setFont(font);
        label_modiueben = new QLabel(frame_profil);
        label_modiueben->setObjectName(QStringLiteral("label_modiueben"));
        label_modiueben->setGeometry(QRect(500, 115, 60, 40));
        label_modiueben->setFont(font4);
        label_7 = new QLabel(frame_profil);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 180, 250, 20));
        label_7->setFont(font);
        label_8 = new QLabel(frame_profil);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 235, 250, 20));
        label_8->setFont(font);
        label_9 = new QLabel(frame_profil);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 290, 251, 20));
        label_9->setFont(font);
        label_mdilernen = new QLabel(frame_profil);
        label_mdilernen->setObjectName(QStringLiteral("label_mdilernen"));
        label_mdilernen->setGeometry(QRect(500, 170, 60, 40));
        label_mdilernen->setFont(font4);
        label_modiwett = new QLabel(frame_profil);
        label_modiwett->setObjectName(QStringLiteral("label_modiwett"));
        label_modiwett->setGeometry(QRect(500, 280, 60, 40));
        label_modiwett->setFont(font4);
        label_modizeit = new QLabel(frame_profil);
        label_modizeit->setObjectName(QStringLiteral("label_modizeit"));
        label_modizeit->setGeometry(QRect(500, 225, 60, 40));
        label_modizeit->setFont(font4);
        line_2 = new QFrame(frame_profil);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 410, 681, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(frame_profil);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 50, 671, 20));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        label_13 = new QLabel(frame_profil);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 345, 251, 20));
        label_13->setFont(font);
        label_eigner = new QLabel(frame_profil);
        label_eigner->setObjectName(QStringLiteral("label_eigner"));
        label_eigner->setGeometry(QRect(500, 325, 60, 40));
        label_eigner->setFont(font4);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        lab_benutzer->setText(QApplication::translate("login", "Benutzername", Q_NULLPTR));
        lab_passwort->setText(QApplication::translate("login", "Passwort", Q_NULLPTR));
        lab_status->setText(QApplication::translate("login", "Status", Q_NULLPTR));
        but_anmelden->setText(QApplication::translate("login", "Anmelden", Q_NULLPTR));
        label->setText(QApplication::translate("login", "Noch nicht registriert?", Q_NULLPTR));
        label_10->setText(QApplication::translate("login", "Benutzername", Q_NULLPTR));
        label_11->setText(QApplication::translate("login", "Passwort", Q_NULLPTR));
        reg_status->setText(QApplication::translate("login", "Status", Q_NULLPTR));
        abbrechen_anmelden->setText(QApplication::translate("login", "Zur\303\274ck zum Hauptmen\303\274", Q_NULLPTR));
        button_registrieren->setText(QApplication::translate("login", "Registrieren", Q_NULLPTR));
        pb_abmelden->setText(QApplication::translate("login", "Abmelden", Q_NULLPTR));
        pb_zurueck->setText(QApplication::translate("login", "Zur\303\274ck zum Hauptmen\303\274", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "Profil von", Q_NULLPTR));
        label_username->setText(QString());
        label_3->setText(QApplication::translate("login", "WPM", Q_NULLPTR));
        label_wpm->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("login", "FPM", Q_NULLPTR));
        label_fpm->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("login", "Anzahl der \303\234bungen ", Q_NULLPTR));
        label_6->setText(QApplication::translate("login", "bei Modi \303\234ben:", Q_NULLPTR));
        label_modiueben->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_7->setText(QApplication::translate("login", "bei Modi Lernen:", Q_NULLPTR));
        label_8->setText(QApplication::translate("login", "bei Modi Zeitrennen:", Q_NULLPTR));
        label_9->setText(QApplication::translate("login", "bei Modi Wettkampf:", Q_NULLPTR));
        label_mdilernen->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_modiwett->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_modizeit->setText(QApplication::translate("login", "0", Q_NULLPTR));
        label_13->setText(QApplication::translate("login", "Eigene Text\303\274bungen:", Q_NULLPTR));
        label_eigner->setText(QApplication::translate("login", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
