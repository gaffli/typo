#include "mytcpserver.h"
#include "winsock2.h"
#include <ws2tcpip.h>
#include <stdio.h>
#include <QHostInfo>
#include <QHostAddress>
#include <QTcpSocket>
#include <QThread>




MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{

    server = new QTcpServer(this);

     // whenever a user connects, it will emit signal






 }

/*
 void MyTcpServer::newConnection()
 {


     // need to grab the socket
     socket = server->nextPendingConnection();
     connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));

      quint16 port = 0;
      port = socket->peerPort();
      QHostAddress ip;
      ip = socket->peerAddress();

    qDebug() << port;

     socket->write("Hello client\r\n");
     if (socket->flush())
       qDebug() << "es wurde geschrieben";




 socket->close();

 }

*/
