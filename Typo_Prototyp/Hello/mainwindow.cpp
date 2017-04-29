#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>
#include <QChar>
#include <QLineEdit>
#include <QTextEdit>
#include "key.h"
#include <QMainWindow>
#include <QLayout>
#include <QWidget>
#include <QHBoxLayout>
#include "login.h"
#include "optionen.h"




int cnt=20;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    ui->gb_links->hide();       //Groupbox für Lernen der linken Hand ausblenden
    ui->gb_rechts->hide();      //Groupbox für Lernen der rechten Hand ausblenden
    ui->frame_lernen->hide();

    keyboard = new key();
    ui->horizontalLayout->addWidget(keyboard);



}


MainWindow::~MainWindow()
{
    delete ui;
    delete keyboard;

}

void MainWindow::on_anmelden_clicked()
{
 login log;             // Objekt von Login erzeugen
 log.setModal(true);
 log.exec();

}

void MainWindow::on_optionen_clicked()
{
   optionen opt;            // Objekt von Optionen erzeugen
   opt.setModal(true);
   opt.exec();

}

void MainWindow::on_lernen_clicked()
{
    ui->gb_links->show();       //Groupbox für Lernen der linken Hand einblenden
    ui->gb_rechts->show();      //Groupbox für Lernen der rechten Hand einblenden
    ui->frame_lernen->hide();



}

void MainWindow::on_bl_zeige_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();




       ui->frame_lernen->show();
       ui->textBrowser->setText("Übung für den Zeigefinger");
}

void MainWindow::on_bl_mittel_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();



     ui->frame_lernen->show();
     ui->textBrowser->setText("Übung für den Mittelfinger");

}

void MainWindow::on_bl_ring_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();



       ui->frame_lernen->show();
       ui->textBrowser->setText("Übung für den Ringfinger");




}

void MainWindow::on_bl_kleiner_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();



    ui->textBrowser->setText("Übung für den Kleinenfinger");
    ui->frame_lernen->show();


}

void MainWindow::on_br_zeige_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();



       ui->frame_lernen->show();
       ui->textBrowser->setText("Übung für den Zeigefinger");

}

void MainWindow::on_br_mittel_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();

       ui->frame_lernen->show();
       ui->textBrowser->setText("Übung für den Mittelfinger");

}

void MainWindow::on_br_ring_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();


     ui->frame_lernen->show();
     ui->textBrowser->setText("Übung für den Ringfinger");

}

void MainWindow::on_br_kleiner_clicked()
{

    ui->gb_links->hide();
    ui->gb_rechts->hide();
    ui->frame_menue->hide();



     ui->frame_lernen->show();
     ui->textBrowser->setText("Übung für den Kleinenfinger");




}

void MainWindow::on_button_uebungende_clicked()
{

    ui->frame_lernen->hide();
    ui->frame_menue->show();


}
