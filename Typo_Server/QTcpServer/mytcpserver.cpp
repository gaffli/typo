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

     socket->write("Hello client\r\n");
     socket->flush();

     MyTcpServer::client_ip.push(ip);
     MyTcpServer::client_ports.push(port);


     socket->abort();

     if (MyTcpServer::client_ports.size() >= 2)
         emit two_clients_signal();

 }

 void MyTcpServer::readyRead()
 {
     qDebug() << "reading...";

     // read the data from the socket
 }

 void MyTcpServer::two_clients_slot()
 {
     bool client_1_written = false;
     bool client_2_written = false;

     QTcpSocket socket_1;
     QTcpSocket socket_2;



     connect(&socket_1, SIGNAL(readyRead()),this, SLOT(readyRead()));
     connect(&socket_2, SIGNAL(readyRead()),this, SLOT(readyRead()));
     connect(&socket_1,SIGNAL(connected()),this,SLOT(connected()));
     connect(&socket_2,SIGNAL(connected()),this,SLOT(connected()));
     connect(&socket_1,SIGNAL(bytesWritten(qint64)),this,SLOT(bytes_written(qint64)));
     connect(&socket_2,SIGNAL(bytesWritten(qint64)),this,SLOT(bytes_written(qint64)));

     QByteArray client_1_wpm;
     QByteArray client_1_fpm;
     QByteArray client_2_wpm;
     QByteArray client_2_fpm;

     qDebug() << MyTcpServer::client_ip.top();

     QHostAddress client_2_ip = MyTcpServer::client_ip.pop();
     quint16 client_2_port = MyTcpServer::client_ports.pop();

     qDebug() << MyTcpServer::client_ip.top();

     QHostAddress client_1_ip = MyTcpServer::client_ip.pop();
     quint16 client_1_port = MyTcpServer::client_ports.pop();


     while(socket_2.state() != QAbstractSocket::ConnectedState)
     {
         socket_2.connectToHost(client_2_ip, client_2_port);
         socket_2.waitForConnected(3000);
         qDebug() << "socket_2 connecting";
         qDebug() << socket_2.localPort();
     }

     while(socket_1.state() != QAbstractSocket::ConnectedState)
     {
         socket_1.connectToHost(client_1_ip, client_1_port);
         socket_1.waitForConnected(3000);
         qDebug() << "socket_1 connecting";
         qDebug() << socket_1.localPort();
     }


     qDebug() << socket_1.state() << "socket1";
     qDebug() << socket_2.state() << "socket2";

     int r = (rand() % 5) + 1;
     QByteArray package_text_number = QByteArray::number(r);

     socket_1.write(package_text_number);
     socket_1.flush();
     socket_2.write(package_text_number);
     socket_2.flush();

     while(socket_2.state() == socket_1.state() && socket_1.state() != QAbstractSocket::UnconnectedState)
     {
          if (socket_1.bytesAvailable() != 0)
          {

              client_1_fpm = socket_1.readAll();
              client_1_wpm = socket_1.readAll();
              client_1_written = true;
          }
          if (socket_2.bytesAvailable() != 0)
          {
              qDebug() << "hier";
              client_2_fpm = socket_2.readAll();
              client_2_wpm = socket_2.readAll();
              client_2_written = true;
          }

     }

     if(client_1_written == client_2_written && client_1_written == true)
     {
         socket_1.write(client_1_fpm);
         socket_2.write(client_2_fpm);
         socket_1.flush();

         socket_1.write(client_1_wpm);
         socket_2.write(client_2_wpm);
         socket_2.flush();
     }

     socket_1.close();
     socket_2.close();

     if(socket_1.state() != QAbstractSocket::UnconnectedState)
         socket_1.abort();

     if(socket_2.state() != QAbstractSocket::UnconnectedState)
         socket_2.abort();
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
