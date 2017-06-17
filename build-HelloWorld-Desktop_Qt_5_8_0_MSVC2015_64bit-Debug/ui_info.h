/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QPushButton *b_back;
    QPushButton *pushButton;
    QFrame *frame_welcome;
    QLabel *label_banner;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(1428, 814);
        frame = new QFrame(info);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 321, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 211, 101));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 100, 211, 81));
        b_back = new QPushButton(frame);
        b_back->setObjectName(QStringLiteral("b_back"));
        b_back->setGeometry(QRect(120, 250, 111, 51));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 170, 111, 51));
        frame_welcome = new QFrame(info);
        frame_welcome->setObjectName(QStringLiteral("frame_welcome"));
        frame_welcome->setGeometry(QRect(300, 130, 1070, 680));
        frame_welcome->setFrameShape(QFrame::StyledPanel);
        frame_welcome->setFrameShadow(QFrame::Raised);
        label_banner = new QLabel(frame_welcome);
        label_banner->setObjectName(QStringLiteral("label_banner"));
        label_banner->setGeometry(QRect(170, 0, 706, 196));
        label_3 = new QLabel(frame_welcome);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 200, 331, 41));
        label_4 = new QLabel(frame_welcome);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 240, 1061, 41));
        label_5 = new QLabel(frame_welcome);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 270, 1061, 41));
        label_6 = new QLabel(frame_welcome);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 320, 1041, 41));
        label_7 = new QLabel(frame_welcome);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 420, 1061, 41));
        label_8 = new QLabel(frame_welcome);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 450, 1061, 41));
        label_9 = new QLabel(frame_welcome);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 1061, 41));
        label_10 = new QLabel(frame_welcome);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 540, 1061, 41));
        label_11 = new QLabel(frame_welcome);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 590, 1061, 41));
        label_12 = new QLabel(frame_welcome);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 630, 1061, 41));
        label_13 = new QLabel(frame_welcome);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 370, 1061, 41));

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QDialog *info)
    {
        info->setWindowTitle(QApplication::translate("info", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("info", "TYPO", Q_NULLPTR));
        label_2->setText(QApplication::translate("info", "Version 0.9.3 (Beta)", Q_NULLPTR));
        b_back->setText(QApplication::translate("info", "Schlie\303\237en", Q_NULLPTR));
        pushButton->setText(QApplication::translate("info", "Homepage", Q_NULLPTR));
        label_banner->setText(QApplication::translate("info", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Willkommen bei Typo!</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("info", "In Typo lernst du das 10-Finger-Tipp System, um keine Typo (Tippfehler) mehr zu schreiben. Zus\303\244tzlich wirst Du mit Typo das schnelle Tippen mit der Tastatur lernen, damit du produktiver deine Arbeiten erledigen kannst.", Q_NULLPTR));
        label_5->setText(QApplication::translate("info", "Du mit Typo das schnelle Tippen mit der Tastatur lernen, damit du produktiver deine Arbeiten erledigen kannst.", Q_NULLPTR));
        label_6->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Links </span>findest du verschiedene <span style=\" font-size:10pt; font-weight:600;\">Modi</span>, mit denen Du deine F\303\244higkeiten kontinuierlich verbessern kannst. Um alle Modis nutzen zu k\303\266nnen, musst Du dich anmelden.</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Lernen: </span>Anf\303\244nger? Dann lerne dort f\303\274r jeden Finger die richtige Zuordnung, der Tasten! Beachte dabei, dass f\303\274r jeden Finger eine Farbe zugeordnet ist.</p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("info", "jeden Finger eine Farbe zugeordnet ist.", Q_NULLPTR));
        label_9->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\303\234ben:</span> Jeder Finger ist trainiert? Dann wirst du in diesem Modus mit richtigen W\303\266rtern und S\303\244tzen konfrontiert!</p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Zeitrennen: </span>Tipp schneller! Hier kannst du unter Zeitdruck dein Tippen verbessern, indem du schneller wirst!</p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Multiplayer: </span>Wer ist besser? Du oder dein Freund?</p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("info", "<html><head/><body><p>Unter <span style=\" font-size:10pt; font-weight:600;\">Benutzerhandbuch</span> findest du weitere Informationen.</p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("info", "<html><head/><body><p>Um alle Modis nutzen zu k\303\266nnen, musst Du dich anmelden.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
