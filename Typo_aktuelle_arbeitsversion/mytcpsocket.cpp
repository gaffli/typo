#include "mytcpsocket.h"
#include <QHostAddress>
#include <QString>

MyTcpSocket::MyTcpSocket(QObject *parent) :
    QObject(parent)
{

}

void MyTcpSocket::doConnect()
{
    socket = new QTcpSocket(this);
    MyTcpSocket::counter_message = 0;

    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(newdisconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead_new()));
    //connect(this,SIGNAL(first_socked_finish()),this,SLOT(socket_after_socket()));

    qDebug() << "connecting...";

    //socket->bind(MyTcpSocket::socketport);

    socket->connectToHost("::ffff:192.168.2.125",1234);


    if(!socket->waitForConnected())
    {
        qDebug() << "Error: " << socket->errorString();
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
        MyTcpSocket::txt_nmbr = MyTcpSocket::new_socket->readAll();
        emit MyTcpSocket::signal_txt_nmbr(MyTcpSocket::txt_nmbr.toInt());
        qDebug() << MyTcpSocket::txt_nmbr;
        emit scnd_plr_con();
        MyTcpSocket::counter_message++;
        break;

    case 1:
        MyTcpSocket::other_fpm = MyTcpSocket::new_socket->readAll();
        MyTcpSocket::counter_message++;
        break;

    case 2:
        MyTcpSocket::other_wpm = MyTcpSocket::new_socket->readAll();
        MyTcpSocket::counter_message++;
        break;

    default:
        break;
    }

}

void MyTcpSocket::newdisconnected()
{
    emit MyTcpSocket::signal_other_f_w_pm(other_fpm.toInt(),other_wpm.toInt());
}

void MyTcpSocket::set_variables(int fpm_c, int wpm_c)
{
    MyTcpSocket::fpm = fpm_c;
    MyTcpSocket::wpm = wpm_c;
    MyTcpSocket::new_socket->write(QByteArray::number(MyTcpSocket::fpm));
    MyTcpSocket::new_socket->flush();
    MyTcpSocket::new_socket->write(QByteArray::number(MyTcpSocket::wpm));
    MyTcpSocket::new_socket->flush();
}

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
