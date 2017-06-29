#include "mytcpsocket.h"
#include <QHostAddress>
#include <QString>

MyTcpSocket::MyTcpSocket(QObject *parent) :
    QObject(parent)
{

}

void MyTcpSocket::doConnect()
{
    MyTcpSocket::socket = new QTcpSocket(this);
    MyTcpSocket::counter_message = 0;

    connect(MyTcpSocket::socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(MyTcpSocket::socket, SIGNAL(disconnected()),this, SLOT(newdisconnected()));
    connect(MyTcpSocket::socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(MyTcpSocket::socket, SIGNAL(readyRead()),this, SLOT(readyRead_new()));

    qDebug() << "connecting...";

    MyTcpSocket::socket->connectToHost("::ffff:192.168.2.125",1234);


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
    qDebug() << "laeuft";
    switch (MyTcpSocket::counter_message) {
    case 0:
        MyTcpSocket::txt_nmbr = MyTcpSocket::socket->readAll();
        emit MyTcpSocket::signal_txt_nmbr(MyTcpSocket::txt_nmbr.toInt());
        qDebug() << MyTcpSocket::txt_nmbr;
        MyTcpSocket::counter_message++;
        break;

    case 1:
        MyTcpSocket::other_fpm = MyTcpSocket::socket->readAll();
        qDebug() << MyTcpSocket::other_fpm;
        MyTcpSocket::counter_message++;
        break;

    case 2:
        MyTcpSocket::other_wpm = MyTcpSocket::socket->readAll();
        qDebug() << MyTcpSocket::other_wpm;
        MyTcpSocket::counter_message++;
        break;

    default:
        qDebug() << MyTcpSocket::socket->readAll();
        break;
    }

}

void MyTcpSocket::newdisconnected()
{
    emit MyTcpSocket::signal_other_f_w_pm(MyTcpSocket::other_fpm.toInt(),MyTcpSocket::other_wpm.toInt());
}

void MyTcpSocket::set_variables(int fpm_c, int wpm_c)
{
    MyTcpSocket::fpm = fpm_c;
    MyTcpSocket::wpm = wpm_c;
    MyTcpSocket::socket->write(QByteArray::number(MyTcpSocket::fpm));
    MyTcpSocket::socket->flush();
    MyTcpSocket::socket->write(QByteArray::number(MyTcpSocket::wpm));
    MyTcpSocket::socket->flush();
}


//connect(this,SIGNAL(first_socked_finish()),this,SLOT(socket_after_socket()));
//void MyTcpSocket::socket_after_socket()
//{
//    MyTcpSocket::counter_message = 0;
//    MyTcpSocket::server = new QTcpServer(this);
//    connect(MyTcpSocket::server, SIGNAL(newConnection()), this, SLOT(newConnection()));


//    if(! MyTcpSocket::server->listen(QHostAddress::Any, MyTcpSocket::socketport))
//    {
//        qDebug() << "Server could not start";
//    }
//    else
//    {
//        qDebug() << "Server started!";
//    }

//}

//void MyTcpSocket::newConnection()
//{
//    connect(MyTcpSocket::new_socket, SIGNAL(disconnected()),this, SLOT(newdisconnected()));
//    connect(MyTcpSocket::new_socket, SIGNAL(readyRead()),this, SLOT(readyRead_new()));

//    MyTcpSocket::new_socket = MyTcpSocket::server->nextPendingConnection();
//    qDebug() << new_socket->state();




//    MyTcpSocket::new_socket->waitForBytesWritten(3000);


//}
