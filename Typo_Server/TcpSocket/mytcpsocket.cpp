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
    //socket->write(&(MyTcpSocket::c));
    socket->write("hellooooooo");
    socket->flush();
    //qDebug() << socket->localAddress();
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
   QTcpSocket * new_socket = new QTcpSocket(this);
   new_socket->bind(MyTcpSocket::socketport);

   new_socket->waitForReadyRead(30000);
   if (new_socket->ConnectedState == 4)
       qDebug() << "connected new socket";
   else
       qDebug() << "connecting new socket failed";
}
