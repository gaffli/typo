/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_menue;
    QPushButton *optionen;
    QPushButton *multiplayer;
    QPushButton *zeitrennen;
    QPushButton *ueben;
    QPushButton *lernen;
    QPushButton *anmelden;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *b_buch;
    QPushButton *pb_profil;
    QFrame *frame_hand;
    QGroupBox *gb_links;
    QPushButton *bl_zeige;
    QPushButton *bl_kleiner;
    QPushButton *bl_mittel;
    QPushButton *bl_ring;
    QGroupBox *gb_rechts;
    QPushButton *br_zeige;
    QPushButton *br_kleiner;
    QPushButton *br_mittel;
    QPushButton *br_ring;
    QFrame *frame_ueben;
    QPushButton *pushButton_eigener;
    QPushButton *pushButton_starten;
    QFrame *frame_zeit;
    QPushButton *pushButton_zeitstart;
    QGroupBox *groupBox_zeit;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_5;
    QFrame *frame_lernen;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QPushButton *button_uebungende;
    QLabel *label_zeit;
    QLabel *label;
    QLineEdit *eingabefeld;
    QLabel *label_username;
    QLabel *label_WPM;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_fehler;
    QFrame *frame_welcome;
    QLabel *label_banner_typo;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_13;
    QFrame *frame_zeitvorbei;
    QLabel *label_wpm;
    QLabel *label_fpm;
    QPushButton *pB_ende;
    QFrame *frame_zeittext;
    QLabel *label_zeittext;
    QLabel *label_wpm_2;
    QLabel *label_fpm_2;
    QFrame *frame_textueben;
    QLabel *label_vorbeitext;
    QLabel *label_fwort;
    QLabel *label_rwort;
    QPushButton *pb_profil_2;
    QFrame *frame_wettkampf;
    QLabel *label_zeittext_2;
    QLabel *label_wpm_4;
    QLabel *label_fpm_4;
    QLabel *label_zeittext_3;
    QLabel *label_wpm_5;
    QLabel *label_fpm_5;
    QLabel *label_wpm_gegner;
    QLabel *label_fpm_gegner;
    QTableView *table_fehler;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_menue = new QFrame(centralWidget);
        frame_menue->setObjectName(QStringLiteral("frame_menue"));
        frame_menue->setGeometry(QRect(10, 10, 201, 971));
        frame_menue->setFrameShape(QFrame::StyledPanel);
        frame_menue->setFrameShadow(QFrame::Raised);
        frame_menue->setLineWidth(2);
        optionen = new QPushButton(frame_menue);
        optionen->setObjectName(QStringLiteral("optionen"));
        optionen->setGeometry(QRect(0, 565, 170, 75));
        multiplayer = new QPushButton(frame_menue);
        multiplayer->setObjectName(QStringLiteral("multiplayer"));
        multiplayer->setEnabled(false);
        multiplayer->setGeometry(QRect(0, 380, 170, 60));
        zeitrennen = new QPushButton(frame_menue);
        zeitrennen->setObjectName(QStringLiteral("zeitrennen"));
        zeitrennen->setEnabled(true);
        zeitrennen->setGeometry(QRect(0, 300, 170, 60));
        ueben = new QPushButton(frame_menue);
        ueben->setObjectName(QStringLiteral("ueben"));
        ueben->setEnabled(true);
        ueben->setGeometry(QRect(0, 200, 170, 60));
        lernen = new QPushButton(frame_menue);
        lernen->setObjectName(QStringLiteral("lernen"));
        lernen->setEnabled(true);
        lernen->setGeometry(QRect(0, 120, 170, 60));
        anmelden = new QPushButton(frame_menue);
        anmelden->setObjectName(QStringLiteral("anmelden"));
        anmelden->setGeometry(QRect(0, 20, 170, 60));
        anmelden->setMouseTracking(false);
        anmelden->setToolTipDuration(0);
        line = new QFrame(frame_menue);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 280, 170, 6));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(frame_menue);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 100, 170, 6));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(frame_menue);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 455, 170, 6));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(frame_menue);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(170, -10, 20, 1191));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::VLine);
        b_buch = new QPushButton(frame_menue);
        b_buch->setObjectName(QStringLiteral("b_buch"));
        b_buch->setEnabled(true);
        b_buch->setGeometry(QRect(0, 485, 170, 60));
        pb_profil = new QPushButton(frame_menue);
        pb_profil->setObjectName(QStringLiteral("pb_profil"));
        pb_profil->setGeometry(QRect(0, 20, 170, 60));
        frame_hand = new QFrame(centralWidget);
        frame_hand->setObjectName(QStringLiteral("frame_hand"));
        frame_hand->setGeometry(QRect(420, 40, 691, 601));
        frame_hand->setFrameShape(QFrame::StyledPanel);
        frame_hand->setFrameShadow(QFrame::Raised);
        gb_links = new QGroupBox(frame_hand);
        gb_links->setObjectName(QStringLiteral("gb_links"));
        gb_links->setEnabled(true);
        gb_links->setGeometry(QRect(20, 30, 180, 400));
        bl_zeige = new QPushButton(gb_links);
        bl_zeige->setObjectName(QStringLiteral("bl_zeige"));
        bl_zeige->setGeometry(QRect(10, 30, 160, 75));
        bl_zeige->setStyleSheet(QLatin1String("QPushButton#bl_zeige{ background-color: rgb(196,194,252);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black; }\n"
"QPushButton#bl_zeige:pressed {\n"
"    background-color: rgb(114, 111, 247);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        bl_kleiner = new QPushButton(gb_links);
        bl_kleiner->setObjectName(QStringLiteral("bl_kleiner"));
        bl_kleiner->setGeometry(QRect(10, 300, 160, 75));
        bl_kleiner->setStyleSheet(QLatin1String("QPushButton#bl_kleiner{ background-color: rgb(250,202,150); \n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black;}\n"
"QPushButton#bl_kleiner:pressed {\n"
"    background-color: rgb(243, 141, 29);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        bl_mittel = new QPushButton(gb_links);
        bl_mittel->setObjectName(QStringLiteral("bl_mittel"));
        bl_mittel->setGeometry(QRect(10, 120, 160, 75));
        bl_mittel->setStyleSheet(QLatin1String("QPushButton#bl_mittel { background-color: rgb(169,252,169); \n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black;}\n"
"QPushButton#bl_mittel:pressed {\n"
"    background-color: rgb(0, 255, 0);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        bl_ring = new QPushButton(gb_links);
        bl_ring->setObjectName(QStringLiteral("bl_ring"));
        bl_ring->setGeometry(QRect(10, 210, 160, 75));
        bl_ring->setStyleSheet(QLatin1String("QPushButton#bl_ring{ background-color: rgb(254,129,122);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black; }\n"
"QPushButton#bl_ring:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        gb_rechts = new QGroupBox(frame_hand);
        gb_rechts->setObjectName(QStringLiteral("gb_rechts"));
        gb_rechts->setEnabled(true);
        gb_rechts->setGeometry(QRect(360, 30, 180, 400));
        br_zeige = new QPushButton(gb_rechts);
        br_zeige->setObjectName(QStringLiteral("br_zeige"));
        br_zeige->setGeometry(QRect(10, 30, 160, 75));
        br_zeige->setStyleSheet(QLatin1String("QPushButton#br_zeige{ background-color: rgb(219,173,245);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black; }\n"
"QPushButton#br_zeige:pressed {\n"
"    background-color: rgb(169, 64, 232);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        br_kleiner = new QPushButton(gb_rechts);
        br_kleiner->setObjectName(QStringLiteral("br_kleiner"));
        br_kleiner->setGeometry(QRect(10, 300, 160, 75));
        br_kleiner->setStyleSheet(QLatin1String("QPushButton#br_kleiner{ background-color: rgb(250,202,150); \n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black;}\n"
"QPushButton#br_kleiner:pressed {\n"
"    background-color: rgb(243, 141, 29);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        br_mittel = new QPushButton(gb_rechts);
        br_mittel->setObjectName(QStringLiteral("br_mittel"));
        br_mittel->setGeometry(QRect(10, 120, 160, 75));
        br_mittel->setStyleSheet(QLatin1String("QPushButton#br_mittel { background-color: rgb(169,252,169); \n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black;}\n"
"QPushButton#br_mittel:pressed {\n"
"    background-color: rgb(0, 255, 0);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        br_ring = new QPushButton(gb_rechts);
        br_ring->setObjectName(QStringLiteral("br_ring"));
        br_ring->setGeometry(QRect(10, 210, 160, 75));
        br_ring->setStyleSheet(QLatin1String("QPushButton#br_ring { background-color: rgb(254,129,122);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 1.5px;\n"
"border-bottom-width: 1.5px;\n"
"border-left-width: 0px;\n"
"border-top-width: 0px;\n"
"	border-right-color: black;\n"
"	border-bottom-color: black; }\n"
"QPushButton#br_ring:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"border-style: outset;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"\n"
"\n"
"	border-right-width: 0px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1.5px;\n"
"border-top-width: 1.5px;\n"
"	border-left-color: black;\n"
"	border-top-color: black;\n"
"}"));
        frame_ueben = new QFrame(centralWidget);
        frame_ueben->setObjectName(QStringLiteral("frame_ueben"));
        frame_ueben->setGeometry(QRect(550, 120, 291, 361));
        frame_ueben->setFrameShape(QFrame::StyledPanel);
        frame_ueben->setFrameShadow(QFrame::Raised);
        pushButton_eigener = new QPushButton(frame_ueben);
        pushButton_eigener->setObjectName(QStringLiteral("pushButton_eigener"));
        pushButton_eigener->setGeometry(QRect(70, 220, 160, 75));
        pushButton_starten = new QPushButton(frame_ueben);
        pushButton_starten->setObjectName(QStringLiteral("pushButton_starten"));
        pushButton_starten->setGeometry(QRect(70, 80, 160, 75));
        frame_zeit = new QFrame(centralWidget);
        frame_zeit->setObjectName(QStringLiteral("frame_zeit"));
        frame_zeit->setGeometry(QRect(500, 130, 401, 331));
        frame_zeit->setFrameShape(QFrame::StyledPanel);
        frame_zeit->setFrameShadow(QFrame::Raised);
        pushButton_zeitstart = new QPushButton(frame_zeit);
        pushButton_zeitstart->setObjectName(QStringLiteral("pushButton_zeitstart"));
        pushButton_zeitstart->setGeometry(QRect(130, 240, 160, 75));
        groupBox_zeit = new QGroupBox(frame_zeit);
        groupBox_zeit->setObjectName(QStringLiteral("groupBox_zeit"));
        groupBox_zeit->setGeometry(QRect(120, 60, 171, 171));
        radioButton_1 = new QRadioButton(groupBox_zeit);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(10, 30, 76, 19));
        radioButton_1->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_zeit);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 60, 76, 19));
        radioButton_3 = new QRadioButton(groupBox_zeit);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 90, 76, 19));
        radioButton_5 = new QRadioButton(groupBox_zeit);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 120, 76, 19));
        frame_lernen = new QFrame(centralWidget);
        frame_lernen->setObjectName(QStringLiteral("frame_lernen"));
        frame_lernen->setGeometry(QRect(10, 10, 1261, 681));
        frame_lernen->setFrameShape(QFrame::StyledPanel);
        frame_lernen->setFrameShadow(QFrame::Raised);
        horizontalWidget = new QWidget(frame_lernen);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(80, 160, 1091, 431));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(frame_lernen);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(105, 130, 1040, 40));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        button_uebungende = new QPushButton(frame_lernen);
        button_uebungende->setObjectName(QStringLiteral("button_uebungende"));
        button_uebungende->setGeometry(QRect(560, 640, 220, 40));
        label_zeit = new QLabel(frame_lernen);
        label_zeit->setObjectName(QStringLiteral("label_zeit"));
        label_zeit->setGeometry(QRect(690, 10, 221, 81));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_zeit->setFont(font1);
        label = new QLabel(frame_lernen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 30, 301, 41));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        eingabefeld = new QLineEdit(frame_lernen);
        eingabefeld->setObjectName(QStringLiteral("eingabefeld"));
        eingabefeld->setGeometry(QRect(110, 590, 1040, 40));
        eingabefeld->setCursorPosition(0);
        label_username = new QLabel(frame_lernen);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(210, 40, 121, 31));
        label_WPM = new QLabel(frame_lernen);
        label_WPM->setObjectName(QStringLiteral("label_WPM"));
        label_WPM->setGeometry(QRect(530, 80, 61, 31));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label_WPM->setFont(font3);
        label_2 = new QLabel(frame_lernen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 80, 161, 31));
        label_2->setFont(font2);
        label_3 = new QLabel(frame_lernen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 80, 111, 31));
        label_3->setFont(font2);
        label_fehler = new QLabel(frame_lernen);
        label_fehler->setObjectName(QStringLiteral("label_fehler"));
        label_fehler->setGeometry(QRect(790, 80, 61, 31));
        label_fehler->setFont(font2);
        frame_welcome = new QFrame(centralWidget);
        frame_welcome->setObjectName(QStringLiteral("frame_welcome"));
        frame_welcome->setGeometry(QRect(219, 9, 1051, 671));
        frame_welcome->setFrameShape(QFrame::StyledPanel);
        frame_welcome->setFrameShadow(QFrame::Raised);
        label_banner_typo = new QLabel(frame_welcome);
        label_banner_typo->setObjectName(QStringLiteral("label_banner_typo"));
        label_banner_typo->setGeometry(QRect(170, 0, 706, 196));
        label_17 = new QLabel(frame_welcome);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(360, 200, 331, 41));
        label_18 = new QLabel(frame_welcome);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(100, 250, 1061, 41));
        label_19 = new QLabel(frame_welcome);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(100, 270, 1061, 41));
        label_20 = new QLabel(frame_welcome);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 320, 1041, 41));
        label_21 = new QLabel(frame_welcome);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 410, 1061, 41));
        label_22 = new QLabel(frame_welcome);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(100, 430, 1061, 41));
        label_23 = new QLabel(frame_welcome);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(100, 475, 1061, 41));
        label_24 = new QLabel(frame_welcome);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(100, 520, 1061, 41));
        label_25 = new QLabel(frame_welcome);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(100, 570, 1061, 41));
        label_26 = new QLabel(frame_welcome);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(100, 625, 1061, 41));
        label_13 = new QLabel(frame_welcome);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 360, 1061, 41));
        frame_zeitvorbei = new QFrame(centralWidget);
        frame_zeitvorbei->setObjectName(QStringLiteral("frame_zeitvorbei"));
        frame_zeitvorbei->setGeometry(QRect(230, 10, 811, 421));
        frame_zeitvorbei->setFrameShape(QFrame::StyledPanel);
        frame_zeitvorbei->setFrameShadow(QFrame::Raised);
        label_wpm = new QLabel(frame_zeitvorbei);
        label_wpm->setObjectName(QStringLiteral("label_wpm"));
        label_wpm->setGeometry(QRect(285, 30, 71, 41));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_wpm->setFont(font4);
        label_fpm = new QLabel(frame_zeitvorbei);
        label_fpm->setObjectName(QStringLiteral("label_fpm"));
        label_fpm->setGeometry(QRect(280, 85, 61, 41));
        label_fpm->setFont(font4);
        pB_ende = new QPushButton(frame_zeitvorbei);
        pB_ende->setObjectName(QStringLiteral("pB_ende"));
        pB_ende->setGeometry(QRect(270, 250, 140, 60));
        frame_zeittext = new QFrame(frame_zeitvorbei);
        frame_zeittext->setObjectName(QStringLiteral("frame_zeittext"));
        frame_zeittext->setGeometry(QRect(20, 30, 451, 211));
        frame_zeittext->setFrameShape(QFrame::StyledPanel);
        frame_zeittext->setFrameShadow(QFrame::Raised);
        label_zeittext = new QLabel(frame_zeittext);
        label_zeittext->setObjectName(QStringLiteral("label_zeittext"));
        label_zeittext->setGeometry(QRect(0, 0, 281, 41));
        label_wpm_2 = new QLabel(frame_zeittext);
        label_wpm_2->setObjectName(QStringLiteral("label_wpm_2"));
        label_wpm_2->setGeometry(QRect(310, 0, 91, 41));
        label_fpm_2 = new QLabel(frame_zeittext);
        label_fpm_2->setObjectName(QStringLiteral("label_fpm_2"));
        label_fpm_2->setGeometry(QRect(310, 50, 91, 51));
        frame_textueben = new QFrame(frame_zeitvorbei);
        frame_textueben->setObjectName(QStringLiteral("frame_textueben"));
        frame_textueben->setGeometry(QRect(20, 30, 491, 161));
        frame_textueben->setFrameShape(QFrame::StyledPanel);
        frame_textueben->setFrameShadow(QFrame::Raised);
        label_vorbeitext = new QLabel(frame_textueben);
        label_vorbeitext->setObjectName(QStringLiteral("label_vorbeitext"));
        label_vorbeitext->setGeometry(QRect(20, 0, 281, 41));
        label_fwort = new QLabel(frame_textueben);
        label_fwort->setObjectName(QStringLiteral("label_fwort"));
        label_fwort->setGeometry(QRect(350, 50, 91, 51));
        label_rwort = new QLabel(frame_textueben);
        label_rwort->setObjectName(QStringLiteral("label_rwort"));
        label_rwort->setGeometry(QRect(340, 0, 105, 41));
        pb_profil_2 = new QPushButton(frame_zeitvorbei);
        pb_profil_2->setObjectName(QStringLiteral("pb_profil_2"));
        pb_profil_2->setGeometry(QRect(40, 250, 170, 60));
        frame_wettkampf = new QFrame(frame_zeitvorbei);
        frame_wettkampf->setObjectName(QStringLiteral("frame_wettkampf"));
        frame_wettkampf->setGeometry(QRect(10, 20, 391, 241));
        frame_wettkampf->setFrameShape(QFrame::StyledPanel);
        frame_wettkampf->setFrameShadow(QFrame::Raised);
        label_zeittext_2 = new QLabel(frame_wettkampf);
        label_zeittext_2->setObjectName(QStringLiteral("label_zeittext_2"));
        label_zeittext_2->setGeometry(QRect(0, 0, 281, 41));
        label_wpm_4 = new QLabel(frame_wettkampf);
        label_wpm_4->setObjectName(QStringLiteral("label_wpm_4"));
        label_wpm_4->setGeometry(QRect(320, 10, 91, 41));
        label_fpm_4 = new QLabel(frame_wettkampf);
        label_fpm_4->setObjectName(QStringLiteral("label_fpm_4"));
        label_fpm_4->setGeometry(QRect(320, 60, 91, 51));
        label_zeittext_3 = new QLabel(frame_wettkampf);
        label_zeittext_3->setObjectName(QStringLiteral("label_zeittext_3"));
        label_zeittext_3->setGeometry(QRect(0, 120, 281, 41));
        label_wpm_5 = new QLabel(frame_wettkampf);
        label_wpm_5->setObjectName(QStringLiteral("label_wpm_5"));
        label_wpm_5->setGeometry(QRect(320, 110, 91, 41));
        label_fpm_5 = new QLabel(frame_wettkampf);
        label_fpm_5->setObjectName(QStringLiteral("label_fpm_5"));
        label_fpm_5->setGeometry(QRect(320, 160, 91, 51));
        label_wpm_gegner = new QLabel(frame_wettkampf);
        label_wpm_gegner->setObjectName(QStringLiteral("label_wpm_gegner"));
        label_wpm_gegner->setGeometry(QRect(270, 110, 71, 41));
        label_wpm_gegner->setFont(font4);
        label_fpm_gegner = new QLabel(frame_wettkampf);
        label_fpm_gegner->setObjectName(QStringLiteral("label_fpm_gegner"));
        label_fpm_gegner->setGeometry(QRect(270, 160, 61, 41));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        label_fpm_gegner->setFont(font5);
        table_fehler = new QTableView(frame_zeitvorbei);
        table_fehler->setObjectName(QStringLiteral("table_fehler"));
        table_fehler->setGeometry(QRect(530, 40, 256, 192));
        table_fehler->setFrameShape(QFrame::StyledPanel);
        table_fehler->setGridStyle(Qt::DotLine);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        optionen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        optionen->setText(QApplication::translate("MainWindow", "Info", Q_NULLPTR));
        multiplayer->setText(QApplication::translate("MainWindow", "Multiplayer", Q_NULLPTR));
        zeitrennen->setText(QApplication::translate("MainWindow", "Zeitrennen", Q_NULLPTR));
        ueben->setText(QApplication::translate("MainWindow", "\303\234ben", Q_NULLPTR));
        lernen->setText(QApplication::translate("MainWindow", "Lernen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        anmelden->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        anmelden->setText(QApplication::translate("MainWindow", "Anmelden", Q_NULLPTR));
        b_buch->setText(QApplication::translate("MainWindow", "Benutzerhandbuch", Q_NULLPTR));
        pb_profil->setText(QApplication::translate("MainWindow", "Mein Profil", Q_NULLPTR));
        gb_links->setTitle(QApplication::translate("MainWindow", "Linke Hand", Q_NULLPTR));
        bl_zeige->setText(QApplication::translate("MainWindow", "Zeigefinger", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bl_kleiner->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bl_kleiner->setText(QApplication::translate("MainWindow", "Kleiner Finger", Q_NULLPTR));
        bl_mittel->setText(QApplication::translate("MainWindow", "Mittelfinger", Q_NULLPTR));
        bl_ring->setText(QApplication::translate("MainWindow", "Ringfinger", Q_NULLPTR));
        gb_rechts->setTitle(QApplication::translate("MainWindow", "Rechte Hand", Q_NULLPTR));
        br_zeige->setText(QApplication::translate("MainWindow", "Zeigefinger", Q_NULLPTR));
        br_kleiner->setText(QApplication::translate("MainWindow", "Kleiner Finger", Q_NULLPTR));
        br_mittel->setText(QApplication::translate("MainWindow", "Mittelfinger", Q_NULLPTR));
        br_ring->setText(QApplication::translate("MainWindow", "Ringfinger", Q_NULLPTR));
        pushButton_eigener->setText(QApplication::translate("MainWindow", "Eigener Text", Q_NULLPTR));
        pushButton_starten->setText(QApplication::translate("MainWindow", "\303\234bung starten", Q_NULLPTR));
        pushButton_zeitstart->setText(QApplication::translate("MainWindow", "\303\234bung starten", Q_NULLPTR));
        groupBox_zeit->setTitle(QApplication::translate("MainWindow", "Zeit", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("MainWindow", "1 Minute", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "2 Minuten", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "3 Minuten", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "5 Minuten", Q_NULLPTR));
        button_uebungende->setText(QApplication::translate("MainWindow", "\303\234bung abbrechen", Q_NULLPTR));
        label_zeit->setText(QApplication::translate("MainWindow", "Los Gehts!", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "verbleibende Zeit in Sekunden:", Q_NULLPTR));
        label_username->setText(QString());
        label_WPM->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "richtige W\303\266rter:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Fehler:", Q_NULLPTR));
        label_fehler->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_banner_typo->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Willkommen bei Typo!</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "In Typo lernst du das 10-Finger-Tipp System, um keine Typo (Tippfehler) mehr zu schreiben. Zus\303\244tzlich wirst ", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Du mit Typo das schnelle Tippen mit der Tastatur lernen, damit du produktiver deine Arbeiten erledigen kannst.", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Links </span>findest du verschiedene <span style=\" font-size:10pt; font-weight:600;\">Modi</span>, mit denen Du deine F\303\244higkeiten kontinuierlich verbessern kannst.</p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Lernen: </span>Anf\303\244nger? Dann lerne dort f\303\274r jeden Finger die richtige Zuordnung, der Tasten! Beachte dabei, dass f\303\274r </p></body></html>", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "jeden Finger eine Farbe zugeordnet ist.", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\303\234ben:</span> Jeder Finger ist trainiert? Dann wirst du in diesem Modus mit richtigen W\303\266rtern und S\303\244tzen konfrontiert!</p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Zeitrennen: </span>Tipp schneller! Hier kannst du unter Zeitdruck dein Tippen verbessern, indem du schneller wirst!</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Multiplayer: </span>Wer ist besser? Du oder dein Freund?</p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Unter <span style=\" font-size:10pt; font-weight:600;\">Benutzerhandbuch</span> findest du weitere Informationen.</p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Um <span style=\" font-size:10pt; font-weight:600;\">alle Modis</span> nutzen zu k\303\266nnen, musst Du dich <span style=\" font-size:10pt; font-weight:600;\">anmelden</span>.</p></body></html>", Q_NULLPTR));
        label_wpm->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_fpm->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pB_ende->setText(QApplication::translate("MainWindow", "Zur\303\274ck", Q_NULLPTR));
        label_zeittext->setText(QApplication::translate("MainWindow", "Die Zeit ist abgelaufen. Du hast", Q_NULLPTR));
        label_wpm_2->setText(QApplication::translate("MainWindow", "WPM", Q_NULLPTR));
        label_fpm_2->setText(QApplication::translate("MainWindow", "FPM", Q_NULLPTR));
        label_vorbeitext->setText(QApplication::translate("MainWindow", "\303\234bung ist vorbei. Du hast", Q_NULLPTR));
        label_fwort->setText(QApplication::translate("MainWindow", "Fehler", Q_NULLPTR));
        label_rwort->setText(QApplication::translate("MainWindow", "richtige W\303\266rter", Q_NULLPTR));
        pb_profil_2->setText(QApplication::translate("MainWindow", "Mein Profil", Q_NULLPTR));
        label_zeittext_2->setText(QApplication::translate("MainWindow", "Die Zeit ist abgelaufen. Du hast", Q_NULLPTR));
        label_wpm_4->setText(QApplication::translate("MainWindow", "WPM", Q_NULLPTR));
        label_fpm_4->setText(QApplication::translate("MainWindow", "FPM", Q_NULLPTR));
        label_zeittext_3->setText(QApplication::translate("MainWindow", "Dein Wettkampfgegner hat ", Q_NULLPTR));
        label_wpm_5->setText(QApplication::translate("MainWindow", "WPM", Q_NULLPTR));
        label_fpm_5->setText(QApplication::translate("MainWindow", "FPM", Q_NULLPTR));
        label_wpm_gegner->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_fpm_gegner->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
