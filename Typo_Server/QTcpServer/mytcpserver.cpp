#include "mytcpserver.h"
#include "winsock2.h"
#include <ws2tcpip.h>
#include <stdio.h>
#include <QHostInfo>
#include <QHostAddress>




MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{

    server = new QTcpServer(this);

     // whenever a user connects, it will emit signal
     connect(server, SIGNAL(newConnection()),
             this, SLOT(newConnection()));


    /* bool ipChange = hostAddress.setAddress("192.168.178.65");

     if(ipChange) qDebug() << "IP ADDRESS CHANGED";
     else qDebug() << "IP ADDRESS NOT CHANGED";
*/
     if(!server->listen(QHostAddress::Any, 1234))
     {
         qDebug() << "Server could not start";
     }
     else
     {
         qDebug() << "Server started!";
     }
 }

 void MyTcpServer::newConnection()
 {
     // need to grab the socket
     QTcpSocket *socket = server->nextPendingConnection();

     qDebug() << socket->peerAddress();
     socket->write("Hello client\r\n");
     socket->flush();

     socket->waitForBytesWritten(3000);

     socket->close();
 }
