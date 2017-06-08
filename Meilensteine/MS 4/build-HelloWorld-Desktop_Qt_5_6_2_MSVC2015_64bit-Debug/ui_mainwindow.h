/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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
        gb_rechts->setGeometry(QRect(360, 40, 180, 400));
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
        gb_links->raise();
        gb_rechts->raise();
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
        frame_lernen->setGeometry(QRect(10, 0, 1261, 691));
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
        label_username = new QLabel(frame_lernen);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(320, 10, 43, 13));
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
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        optionen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        optionen->setText(QApplication::translate("MainWindow", "Info", 0));
        multiplayer->setText(QApplication::translate("MainWindow", "Multiplayer", 0));
        zeitrennen->setText(QApplication::translate("MainWindow", "Zeitrennen", 0));
        ueben->setText(QApplication::translate("MainWindow", "\303\234ben", 0));
        lernen->setText(QApplication::translate("MainWindow", "Lernen", 0));
        anmelden->setText(QApplication::translate("MainWindow", "Anmelden", 0));
        b_buch->setText(QApplication::translate("MainWindow", "Benutzerhandbuch", 0));
        gb_links->setTitle(QApplication::translate("MainWindow", "Linke Hand", 0));
        bl_zeige->setText(QApplication::translate("MainWindow", "Zeigefinger", 0));
#ifndef QT_NO_TOOLTIP
        bl_kleiner->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bl_kleiner->setText(QApplication::translate("MainWindow", "Kleiner Finger", 0));
        bl_mittel->setText(QApplication::translate("MainWindow", "Mittelfinger", 0));
        bl_ring->setText(QApplication::translate("MainWindow", "Ringfinger", 0));
        gb_rechts->setTitle(QApplication::translate("MainWindow", "Rechte Hand", 0));
        br_zeige->setText(QApplication::translate("MainWindow", "Zeigefinger", 0));
        br_kleiner->setText(QApplication::translate("MainWindow", "Kleiner Finger", 0));
        br_mittel->setText(QApplication::translate("MainWindow", "Mittelfinger", 0));
        br_ring->setText(QApplication::translate("MainWindow", "Ringfinger", 0));
        pushButton_eigener->setText(QApplication::translate("MainWindow", "Eigener Text", 0));
        pushButton_starten->setText(QApplication::translate("MainWindow", "\303\234bung starten", 0));
        pushButton_zeitstart->setText(QApplication::translate("MainWindow", "\303\234bung starten", 0));
        groupBox_zeit->setTitle(QApplication::translate("MainWindow", "Zeit", 0));
        radioButton_1->setText(QApplication::translate("MainWindow", "1 Minute", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "2 Minuten", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3 Minuten", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "5 Minuten", 0));
        button_uebungende->setText(QApplication::translate("MainWindow", "\303\234bung abbrechen", 0));
        label_zeit->setText(QApplication::translate("MainWindow", "Los Gehts!", 0));
        label->setText(QApplication::translate("MainWindow", "verbleibende Zeit in Sekunden:", 0));
        label_username->setText(QString());
        label_WPM->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "richtige W\303\266rter:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Fehler:", 0));
        label_fehler->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
