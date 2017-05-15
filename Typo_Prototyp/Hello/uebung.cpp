#include "uebung.h"
#include "ui_uebung.h"
#include <iostream>
#include <time.h>
#include"mainwindow.h"
#include <QString>
#include <QSignalMapper>


uebung::uebung(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::uebung)
{
    ui->setupUi(this);
    QString *txt = new QString ;
}

uebung::~uebung()
{
    delete ui;
}

void uebung::signals_taste(int taste)
{
     signaltraffic(taste, 0);
}

void uebung::signaltraffic(int taste, int z)
{
    signtr(taste, &z);
}

void uebung::signtr(int taste, int *wert)
{
    *wert++;
    emit s_ts_tast(taste,*wert);
    std::cout << taste << std::endl;
}


QString* uebung::Text_slot(QString *texet)
{
    return(texet);
}



void uebung::s_tts_tast(QString *txt,int taste, int textstelle)
{
    QString *text = Text_slot(txt);

    //QString *text = new QString(); // wenn das obere nich funmktioniert evtl ja das hier????

    QString::iterator iter = text->begin();
    QString::iterator end = text->end();

    //for (; iter != end; ++iter)

    switch (taste == *(iter+textstelle))
    {
        case true:
            emit Taste_richtig(taste);
        case false:
            emit Taste_falsch(taste, textstelle);
    }
}

