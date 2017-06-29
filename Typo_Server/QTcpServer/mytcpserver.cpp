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



     if(counter == 0)
     {
         MyTcpServer::sockets.append(server->nextPendingConnection());
        qDebug() << MyTcpServer::sockets.at(counter)->peerAddress() << "socket 1 counter:" << counter;
     }

     if(counter == 1)
     {
         MyTcpServer::sockets.append(server->nextPendingConnection());
        qDebug() << MyTcpServer::sockets.at(counter)->peerAddress() << "socket 2 counter:" << counter;
     }

     MyTcpServer::counter++;

     qDebug() << MyTcpServer::sockets.at(0)->state() << "socket1";

     if(counter % 2 == 0 && counter > 0)
    {
        emit MyTcpServer::two_clients_signal();
        qDebug() << "2ppl ";
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

     qDebug() << MyTcpServer::sockets[0]->state() << "socket1";
     qDebug() << MyTcpServer::sockets[1]->state() << "socket2";
     qDebug() << MyTcpServer::sockets[0]->peerAddress() << "socket1";
     qDebug() << MyTcpServer::sockets[1]->peerAddress() << "socket2";

     int r = rand() % 5 + 1;
     QByteArray package_text_number = QByteArray::number(r);

     qDebug() << r;

     if (MyTcpServer::sockets[0]->state() == QAbstractSocket::ConnectedState)
     {
         qDebug() << "socket_1 written 1";
         MyTcpServer::sockets[0]->write(package_text_number);
         MyTcpServer::sockets[0]->flush();
     }
     if (MyTcpServer::sockets[1]->state() == QAbstractSocket::ConnectedState)
     {
         qDebug() << "socket_2 written 1";
         MyTcpServer::sockets[1]->write(package_text_number);
         MyTcpServer::sockets[1]->flush();
     }

     MyTcpServer::sockets[0]->waitForReadyRead();
     MyTcpServer::sockets[1]->waitForReadyRead();

     while(MyTcpServer::sockets[1]->state() == MyTcpServer::sockets[0]->state() &&
           MyTcpServer::sockets[0]->state() != QAbstractSocket::UnconnectedState)
     {

          if (MyTcpServer::sockets[0]->bytesAvailable() != 0)
          {
              qDebug() << "hier";
              client_1_fpm = MyTcpServer::sockets[0]->readAll();
              client_1_wpm = MyTcpServer::sockets[0]->readAll();
              client_1_written = true;
          }
          if (MyTcpServer::sockets[1]->bytesAvailable() != 0)
          {
              qDebug() << "hier";
              client_2_fpm = MyTcpServer::sockets[1]->readAll();
              client_2_wpm = MyTcpServer::sockets[1]->readAll();
              client_2_written = true;
          }

          if(client_1_written && client_2_written)
              break;

     }

     if(client_1_written == client_2_written && client_1_written == true)
     {
         MyTcpServer::sockets[0]->write(client_1_fpm);
         MyTcpServer::sockets[1]->write(client_2_fpm);
         MyTcpServer::sockets[0]->flush();
         MyTcpServer::sockets[1]->flush();

         MyTcpServer::sockets[0]->write(client_1_wpm);
         MyTcpServer::sockets[1]->write(client_2_wpm);
         MyTcpServer::sockets[0]->flush();
         MyTcpServer::sockets[1]->flush();
     }


     qDebug() << MyTcpServer::sockets.at(0)->state() << "socket1";
     qDebug() << MyTcpServer::sockets.at(1)->state() << "socket2";

     MyTcpServer::sockets[0]->close();
     MyTcpServer::sockets[1]->close();

     if(MyTcpServer::sockets[0]->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::sockets[0]->abort();

     if(MyTcpServer::sockets[1]->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::sockets[1]->abort();
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
