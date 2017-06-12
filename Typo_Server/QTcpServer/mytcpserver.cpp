#include "mytcpserver.h"

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{

    server = new QTcpServer(this);

     // whenever a user connects, it will emit signal
     connect(server, SIGNAL(newConnection()),
             this, SLOT(newConnection()));
     QHostAddress hostAddress;
     bool ipChange = hostAddress.setAddress("192.168.178.65");
     if(ipChange) qDebug() << "IP ADDRESS CHANGED";
     else qDebug() << "IP ADDRESS NOT CHANGED";
     if(!server->listen(hostAddress, 9999))
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

     socket->write("Hello client\r\n");
     socket->flush();

     socket->waitForBytesWritten(3000);

     socket->close();
 }
