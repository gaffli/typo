#include "mytcpsocket.h"
#include <QHostAddress>
#include <QString>

MyTcpSocket::MyTcpSocket(QObject *parent) :
    QObject(parent)
{

}

void MyTcpSocket::doConnect()
{
    /// Es wird ein neues Socket erstellt und der Counter für dieses Socket auf Null gesetzt.
    /// alle Connects werden vollzogen, damit bei Standartsignalen der Klasse "QSocket" die Funktionen die ich geschrieben habe angepingt werden.
    MyTcpSocket::socket = new QTcpSocket(this);
    MyTcpSocket::counter_message = 0;

    connect(MyTcpSocket::socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(MyTcpSocket::socket, SIGNAL(disconnected()),this, SLOT(newdisconnected()));
    connect(MyTcpSocket::socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(MyTcpSocket::socket, SIGNAL(readyRead()),this, SLOT(readyRead_new()));

    qDebug() << "connecting...";

    MyTcpSocket::socket->connectToHost("172.16.36.216",1234);


    if(!MyTcpSocket::socket->waitForConnected())
    {
        qDebug() << "Error: " << MyTcpSocket::socket->errorString();
    }

}

void MyTcpSocket::connected()
{
    qDebug() << "connected...";
}


void MyTcpSocket::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << " bytes written...";
}


void MyTcpSocket::readyRead_new()
{
    /// Der Counter für das Socket läuft für jede Nachricht. Die erste Nachricht die ankommt ist die Textnummer.
    /// Die zweite Nachricht ist die fpm Nummer des Gegners.
    /// Die dritte Nachricht ist die wpm Nummer des Gegners.
    qDebug() << "laeuft";
    switch (MyTcpSocket::counter_message) {
    case 0:
        MyTcpSocket::txt_nmbr = MyTcpSocket::socket->readAll();
        qDebug() << MyTcpSocket::txt_nmbr;
        emit MyTcpSocket::signal_txt_nmbr(MyTcpSocket::txt_nmbr.toInt());
        MyTcpSocket::counter_message++;

        break;

    case 1:
        MyTcpSocket::other_fpm = MyTcpSocket::socket->readAll();
        qDebug() << MyTcpSocket::other_fpm << "other fpm";
        MyTcpSocket::counter_message++;
        break;

    case 2:
        MyTcpSocket::other_wpm = MyTcpSocket::socket->readAll();
        qDebug() << MyTcpSocket::other_wpm << "other wpm";
        MyTcpSocket::counter_message++;
        break;

    default:
        qDebug() << MyTcpSocket::socket->readAll();
        break;
    }

}

void MyTcpSocket::newdisconnected()
{
    /// Erst wenn das Socket disconnected ist, werden die fpm und wpm des Gegners per Signal weitergegeben.
    qDebug() << "newdisconnected is emitted";
    emit MyTcpSocket::signal_other_f_w_pm(MyTcpSocket::other_fpm.toInt(),MyTcpSocket::other_wpm.toInt());
}

void MyTcpSocket::set_variables(int fpm_c, int wpm_c)
{
    /// Direkt nach dem Ende der Übung werden die fpm und wpm an den Server übertragen.
    MyTcpSocket::fpm = fpm_c;
    MyTcpSocket::wpm = wpm_c;
    MyTcpSocket::socket->write(QByteArray::number(MyTcpSocket::fpm));
    MyTcpSocket::socket->flush();
    MyTcpSocket::socket->write(QByteArray::number(MyTcpSocket::wpm));
    MyTcpSocket::socket->flush();
}


