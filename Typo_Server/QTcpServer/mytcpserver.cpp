#include "mytcpserver.h"
#include "winsock2.h"
#include <ws2tcpip.h>
#include <stdio.h>
#include <QHostInfo>
#include <QHostAddress>
#include <QTcpSocket>
#include <QThread>
#include <random>




MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{

    server = new QTcpServer(this);

     // whenever a user connects, it will emit signal
     connect(server, SIGNAL(newConnection()),
             this, SLOT(newConnection()));

     connect(this,SIGNAL(two_clients_signal()),this,SLOT(two_clients_slot()));



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




     MyTcpServer::client_ip.enqueue(ip);
     MyTcpServer::client_ports.enqueue(port);

     if (MyTcpServer::client_ports.size() >= 2)
     emit two_clients_signal();

 socket->close();

 }

 void MyTcpServer::readyRead()
 {
     qDebug() << "reading...";

     // read the data from the socket
     qDebug() << socket->readAll();
 }

 void MyTcpServer::two_clients_slot()
 {
     bool client_1_written = false;
     bool client_2_written = false;

     QTcpSocket * socket_1;
     QTcpSocket * socket_2;

     QByteArray client_1_wpm;
     QByteArray client_1_fpm;
     QByteArray client_2_wpm;
     QByteArray client_2_fpm;

     socket_1->connectToHost(MyTcpServer::client_ip.dequeue(), MyTcpServer::client_ports.dequeue());
     socket_2->connectToHost(MyTcpServer::client_ip.dequeue(), MyTcpServer::client_ports.dequeue());

     int r = rand() % 5;
     QByteArray package_text_number = QByteArray::number(r);

     socket_1->write(package_text_number);
     socket_2->write(package_text_number);
     socket_1->flush();
     socket_2->flush();

     while(socket_1->state() == socket_2->state() && socket_1->state() != QAbstractSocket::UnconnectedState)
     {
          if (socket_1->bytesAvailable() != 0)
          {
              client_1_fpm = socket_1->readAll();
              client_1_wpm = socket_1->readAll();
              client_1_written = true;
          }
          if (socket_2->bytesAvailable() != 0)
          {
              client_2_fpm = socket_2->readAll();
              client_2_wpm = socket_2->readAll();
              client_2_written = true;
          }

     }

     if(client_1_written == client_2_written && client_1_written == true)
     {
         socket_1->write(client_1_fpm);
         socket_1->write(client_1_wpm);
         socket_2->write(client_2_fpm);
         socket_2->write(client_2_wpm);
         socket_1->flush();
         socket_2->flush();
     }

     socket_1->close();
     socket_2->close();
 }

