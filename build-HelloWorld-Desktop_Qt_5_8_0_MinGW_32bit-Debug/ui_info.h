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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QPushButton *b_back;
    QPushButton *pushButton;
    QFrame *frame_zeitvorbei;
    QLabel *label_wpm;
    QLabel *label_fpm;
    QPushButton *pB_ende;
    QTableWidget *tableWidget_woerter;
    QFrame *frame_zeittext;
    QLabel *label_zeittext;
    QLabel *label_wpm_2;
    QLabel *label_fpm_2;
    QFrame *frame_textueben;
    QLabel *label_vorbeitext;
    QLabel *label_fwort;
    QLabel *label_rwort;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(1255, 933);
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
        frame_zeitvorbei = new QFrame(info);
        frame_zeitvorbei->setObjectName(QStringLiteral("frame_zeitvorbei"));
        frame_zeitvorbei->setGeometry(QRect(370, 160, 811, 421));
        frame_zeitvorbei->setFrameShape(QFrame::StyledPanel);
        frame_zeitvorbei->setFrameShadow(QFrame::Raised);
        label_wpm = new QLabel(frame_zeitvorbei);
        label_wpm->setObjectName(QStringLiteral("label_wpm"));
        label_wpm->setGeometry(QRect(300, 30, 71, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_wpm->setFont(font1);
        label_fpm = new QLabel(frame_zeitvorbei);
        label_fpm->setObjectName(QStringLiteral("label_fpm"));
        label_fpm->setGeometry(QRect(300, 80, 61, 41));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_fpm->setFont(font2);
        pB_ende = new QPushButton(frame_zeitvorbei);
        pB_ende->setObjectName(QStringLiteral("pB_ende"));
        pB_ende->setGeometry(QRect(270, 170, 140, 60));
        tableWidget_woerter = new QTableWidget(frame_zeitvorbei);
        tableWidget_woerter->setObjectName(QStringLiteral("tableWidget_woerter"));
        tableWidget_woerter->setGeometry(QRect(520, 50, 256, 192));
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
        label_rwort->setGeometry(QRect(340, 0, 91, 41));

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
        label_wpm->setText(QApplication::translate("info", "0", Q_NULLPTR));
        label_fpm->setText(QApplication::translate("info", "0", Q_NULLPTR));
        pB_ende->setText(QApplication::translate("info", "Zur\303\274ck", Q_NULLPTR));
        label_zeittext->setText(QApplication::translate("info", "Die Zeit ist abgelaufen. Du hast", Q_NULLPTR));
        label_wpm_2->setText(QApplication::translate("info", "WPM", Q_NULLPTR));
        label_fpm_2->setText(QApplication::translate("info", "FPM", Q_NULLPTR));
        label_vorbeitext->setText(QApplication::translate("info", "\303\234bung ist vorbei. Du hast", Q_NULLPTR));
        label_fwort->setText(QApplication::translate("info", "Fehler", Q_NULLPTR));
        label_rwort->setText(QApplication::translate("info", "richtige W\303\266rter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
