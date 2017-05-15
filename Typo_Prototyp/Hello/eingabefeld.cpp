#include "eingabefeld.h"
#include "ui_eingabefeld.h"
#include"mainwindow.h"
#include <iostream>
#include <QString>
#include <QChar>
#include <QLineEdit>
#include <QTextEdit>
#include <QMainWindow>
#include <QLayout>
#include <QWidget>
#include <QHBoxLayout>
#include <Windows.h>
#include <QKeyEvent>
#include <QtCore>

//using namespace Qt;

eingabefeld::eingabefeld(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eingabefeld)
{
    ui->setupUi(this);
    qApp->installEventFilter(this);
}

eingabefeld::~eingabefeld()
{
    delete ui;
}


bool eingabefeld::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::KeyPress)
  {

          QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
          int taste = keyEvent->key();

          emit signal_taste(taste);


  }
return QObject::eventFilter(obj, event);
}


