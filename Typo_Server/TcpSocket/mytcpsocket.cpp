#include "mytcpsocket.h"
#include <QHostAddress>
#include <QString>
#include "mytcpserver.h"

MyTcpSocket::MyTcpSocket(QObject *parent) :
    QObject(parent)
{

}

void MyTcpSocket::doConnect()
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    connect(this,SIGNAL(first_socked_finish()),this,SLOT(socket_after_socket()));

    qDebug() << "connecting...";

    // this is not blocking call
    socket->bind(MyTcpSocket::socketport);
    socket->connectToHost("127.0.0.1",1234);
    // we need to wait...


    if(!socket->waitForConnected(5000))
    {
        qDebug() << "Error: " << socket->errorString();
    }
}

void MyTcpSocket::connected()
{
    qDebug() << "connected...";

    // Hey server, tell me about you.
    socket->write("HEAD / HTTP/1.0\r\n\r\n\r\n\r\n");
    socket->write("hallo server");
    socket->flush();
}

void MyTcpSocket::disconnected()
{
    qDebug() << "disconnected...";
    emit first_socked_finish();
}

void MyTcpSocket::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << " bytes written...";
}

void MyTcpSocket::readyRead()
{
    qDebug() << "reading...";

    // read the data from the socket
    qDebug() << socket->readAll();
}

void MyTcpSocket::socket_after_socket()
{
    MyTcpSocket::counter_message = 0;
    MyTcpSocket::server = new QTcpServer(this);
    connect(MyTcpSocket::server, SIGNAL(newConnection()), this, SLOT(newConnection()));
    connect(MyTcpSocket::new_socket, SIGNAL(disconnected()),this, SLOT(newdisconnected()));

    if(! MyTcpSocket::server->listen(QHostAddress::LocalHost, MyTcpSocket::socketport))
    {
        qDebug() << "Server could not start";
    }
    else
    {
        qDebug() << "Server started!";
    }

}

void MyTcpSocket::newConnection()
{
    MyTcpSocket::new_socket = new QTcpSocket(this);

    connect(MyTcpSocket::new_socket, SIGNAL(readyRead()),this, SLOT(readyRead_new()));

    MyTcpSocket::new_socket = MyTcpSocket::server->nextPendingConnection();

    MyTcpSocket::new_socket->waitForBytesWritten(3000);
    MyTcpSocket::new_socket->write("hellooo");
    MyTcpSocket::new_socket->flush();


}

void MyTcpSocket::readyRead_new()
{
    qDebug() << "laeuft";
    switch (MyTcpSocket::counter_message) {
    case 0:
        MyTcpSocket::new_socket->read(&(MyTcpSocket::txt_nmbr),5);
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
}
