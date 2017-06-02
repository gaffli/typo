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
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_wpm;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_fpm;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(1200, 814);
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
        frame_2 = new QFrame(info);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(410, 40, 761, 571));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 30, 171, 41));
        label_wpm = new QLabel(frame_2);
        label_wpm->setObjectName(QStringLiteral("label_wpm"));
        label_wpm->setGeometry(QRect(60, 90, 71, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_wpm->setFont(font1);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 90, 91, 41));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 160, 91, 51));
        label_fpm = new QLabel(frame_2);
        label_fpm->setObjectName(QStringLiteral("label_fpm"));
        label_fpm->setGeometry(QRect(40, 170, 61, 41));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_fpm->setFont(font2);

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
        label_3->setText(QApplication::translate("info", "Die Zeit ist abgelaufen. Du hast", Q_NULLPTR));
        label_wpm->setText(QApplication::translate("info", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("info", "WPM", Q_NULLPTR));
        label_5->setText(QApplication::translate("info", "FPM", Q_NULLPTR));
        label_fpm->setText(QApplication::translate("info", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
