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
     qDebug() << "hi";

     switch (MyTcpServer::counter)
     {
     case 0:
         qDebug() << "1 ppls";
         MyTcpServer::socket_1 = server->nextPendingConnection();
         connect(MyTcpServer::socket_1, SIGNAL(readyRead()),this, SLOT(readyRead()));
         MyTcpServer::counter++;
         qDebug() << MyTcpServer::socket_1->state() << "socket1";
         break;

     case 1:
            qDebug() << MyTcpServer::socket_1->state() << "socket1";
         qDebug() << "2 ppls";
         MyTcpServer::socket_2 = server->nextPendingConnection();
         connect(MyTcpServer::socket_2, SIGNAL(readyRead()),this, SLOT(readyRead()));
         MyTcpServer::counter = 0;
         emit two_clients_signal();
         break;

     default:
         break;
     }


 }

 void MyTcpServer::readyRead()
 {
     qDebug() << "reading...";

     // read the data from the socket
 }

 void MyTcpServer::two_clients_slot()
 {
     QByteArray client_1_wpm;
     QByteArray client_1_fpm;
     QByteArray client_2_wpm;
     QByteArray client_2_fpm;

     bool client_1_written = false;
     bool client_2_written = false;

     qDebug() << MyTcpServer::socket_1->state() << "socket1";
     qDebug() << MyTcpServer::socket_2->state() << "socket2";

     int r = (rand() % 5) + 1;
     QByteArray package_text_number = QByteArray::number(r);

     qDebug() << r;

     if (MyTcpServer::socket_1->state() == QAbstractSocket::ConnectingState)
     {
         qDebug() << "socket_1 written";
         MyTcpServer::socket_1->write(package_text_number);
         MyTcpServer::socket_1->flush();
     }
     if (MyTcpServer::socket_2->state() == QAbstractSocket::ConnectingState)
     {
         qDebug() << "socket_2 written";
         MyTcpServer::socket_2->write(package_text_number);
         MyTcpServer::socket_2->flush();
     }


     while(MyTcpServer::socket_2->state() == MyTcpServer::socket_1->state() &&
           MyTcpServer::socket_1->state() != QAbstractSocket::UnconnectedState)
     {
          if (MyTcpServer::socket_1->bytesAvailable() != 0)
          {

              client_1_fpm = MyTcpServer::socket_1->readAll();
              client_1_wpm = MyTcpServer::socket_1->readAll();
              client_1_written = true;
          }
          if (MyTcpServer::socket_2->bytesAvailable() != 0)
          {
              qDebug() << "hier";
              client_2_fpm = MyTcpServer::socket_2->readAll();
              client_2_wpm = MyTcpServer::socket_2->readAll();
              client_2_written = true;
          }

     }

     if(client_1_written == client_2_written && client_1_written == true)
     {
         MyTcpServer::socket_1->write(client_1_fpm);
         MyTcpServer::socket_2->write(client_2_fpm);
         MyTcpServer::socket_1->flush();

         MyTcpServer::socket_1->write(client_1_wpm);
         MyTcpServer::socket_2->write(client_2_wpm);
         MyTcpServer::socket_2->flush();
     }

     MyTcpServer::socket_1->close();
     MyTcpServer::socket_2->close();

     if(MyTcpServer::socket_1->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::socket_1->abort();

     if(MyTcpServer::socket_2->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::socket_2->abort();
 }

void MyTcpServer::connected()
{
    qDebug() << "connected";
}

void MyTcpServer::bytes_written(qint64 bytes)
{
    qDebug() << bytes;
    qDebug() << "bytes written";
}




//     QTcpSocket socket_1;
//     QTcpSocket socket_2;

//     connect(&socket_1, SIGNAL(readyRead()),this, SLOT(readyRead()));
//     connect(&socket_2, SIGNAL(readyRead()),this, SLOT(readyRead()));
//     connect(&socket_1,SIGNAL(connected()),this,SLOT(connected()));
//     connect(&socket_2,SIGNAL(connected()),this,SLOT(connected()));
//     connect(&socket_1,SIGNAL(bytesWritten(qint64)),this,SLOT(bytes_written(qint64)));
//     connect(&socket_2,SIGNAL(bytesWritten(qint64)),this,SLOT(bytes_written(qint64)));



//     qDebug() << MyTcpServer::client_ip.top();

//     QHostAddress client_2_ip = MyTcpServer::client_ip.pop();
//     quint16 client_2_port = MyTcpServer::client_ports.pop();

//     qDebug() << MyTcpServer::client_ip.top();

//     QHostAddress client_1_ip = MyTcpServer::client_ip.pop();
//     quint16 client_1_port = MyTcpServer::client_ports.pop();
//     while(MyTcpServer::socket_2.state() != QAbstractSocket::ConnectedState)
//     {
//         socket_2.connectToHost(client_2_ip, client_2_port);
//         socket_2.waitForConnected(3000);
//         qDebug() << "socket_2 connecting";
//         qDebug() << socket_2.localPort();
//     }

//     while(socket_1.state() != QAbstractSocket::ConnectedState)
//     {
//         socket_1.connectToHost(client_1_ip, client_1_port);
//         socket_1.waitForConnected(3000);
//         qDebug() << "socket_1 connecting";
//         qDebug() << socket_1.localPort();
//     }
