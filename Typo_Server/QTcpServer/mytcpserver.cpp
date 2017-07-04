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

     /// Connects für den Server durchführen. Der Server ruft NewConnection immer dann auf, wenn sich ein Client verbindet.
     connect(server, SIGNAL(newConnection()),
             this, SLOT(newConnection()));

     connect(this,SIGNAL(two_clients_signal(int, int)),this,SLOT(two_clients_slot(int, int)));


/// Der Server wartet auf eingehende Connections auf dem Port 1234
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
     /// Falls die Connection die erste ist, lässt der Server diese offen und wartet. Das verbundene Socket ist in einem Vector gespeichert.
     /// Falls es die zweite Connections ist, wird das verbundene Socket in den Vector gespeichert und dann wird das Signal "two_clients" ausgesendet.
     /// Dieses ruft dann die hauptarbeitende Funktion "two_clients" auf, welche die beiden Sockets bearbeitet.
     switch (counter) {
     case 0:
        MyTcpServer::sockets.append(server->nextPendingConnection());
        qDebug() << MyTcpServer::sockets.at(MyTcpServer::client_cntr)->peerAddress() << "socket 1 counter:" << counter;
        MyTcpServer::counter++;
        MyTcpServer::client_cntr++;
         break;
     case 1:
        MyTcpServer::sockets.append(server->nextPendingConnection());
        qDebug() << MyTcpServer::sockets.at(MyTcpServer::client_cntr)->peerAddress() << "socket 2 counter:" << counter;
        MyTcpServer::counter = 0;
        MyTcpServer::client_cntr++;
        client_1 = MyTcpServer::client_cntr - 2;
        client_2 = MyTcpServer::client_cntr - 1;
        emit MyTcpServer::two_clients_signal(client_1, client_2);
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

 void MyTcpServer::two_clients_slot(int client_1, int client_2)
 {
     QByteArray client_1_wpm;
     QByteArray client_1_fpm;
     QByteArray client_2_wpm;
     QByteArray client_2_fpm;

     bool client_1_written = false;
     bool client_2_written = false;

     qDebug() << MyTcpServer::sockets[client_1]->state() << "socket1";
     qDebug() << MyTcpServer::sockets[client_2]->state() << "socket2";

     int r = rand() % 5 + 1;
     r = rand() % 5 + 1;
     QByteArray package_text_number = QByteArray::number(r);

     qDebug() << r;

     /// Erst wird ein text ausgewählt, danach wird erst gefragt ob die Sockets noch verbunden sind, falls ja,
     /// wird der Multiplayer durch das aussenden der Textnummer gestartet.
     if (MyTcpServer::sockets[client_1]->state() == QAbstractSocket::ConnectedState)
     {
         qDebug() << "socket_1 written 1";
         MyTcpServer::sockets[client_1]->write(package_text_number);
         MyTcpServer::sockets[client_1]->flush();
     }
     if (MyTcpServer::sockets[client_2]->state() == QAbstractSocket::ConnectedState)
     {
         qDebug() << "socket_2 written 1";
         MyTcpServer::sockets[client_2]->write(package_text_number);
         MyTcpServer::sockets[client_2]->flush();
     }

     /// Warten auf beenden des abtippens der zwei Clienten
    MyTcpServer::sockets[client_1]->waitForReadyRead(61000);
    MyTcpServer::sockets[client_2]->waitForReadyRead(60100);

    /// es wird, falls es gelesen werden kann, die fpm und wpm beider clienten ausgelesen und gespeichert.
        if (MyTcpServer::sockets[client_1]->bytesAvailable() != 0)
        {
            qDebug() << "hier socket 1";
            client_1_fpm = MyTcpServer::sockets[client_1]->read(5);
            MyTcpServer::sockets[client_1]->waitForReadyRead();
            client_1_wpm = MyTcpServer::sockets[client_1]->readAll();
            client_1_written = true;
        }

          if (MyTcpServer::sockets[client_2]->bytesAvailable() != 0)
          {
              qDebug() << "hier socket 2";
              client_2_fpm = MyTcpServer::sockets[client_2]->read(5);
              MyTcpServer::sockets[client_2]->waitForReadyRead();
              client_2_wpm = MyTcpServer::sockets[client_2]->readAll();
              client_2_written = true;
          }



          /// wenn auf beiden Sockets geschrieben wurde, werden die Ergebnisse weitergesendet.

     if(client_1_written == client_2_written && client_1_written == true)
     {
         qDebug() << "socket_1 und _2 written";
         MyTcpServer::sockets[client_1]->write(client_2_fpm);
         MyTcpServer::sockets[client_2]->write(client_1_fpm);
         MyTcpServer::sockets[client_1]->flush();
         MyTcpServer::sockets[client_2]->flush();

         MyTcpServer::sockets[client_1]->write(client_2_wpm);
         MyTcpServer::sockets[client_2]->write(client_1_wpm);
         MyTcpServer::sockets[client_1]->flush();
         MyTcpServer::sockets[client_2]->flush();
     }


     qDebug() << MyTcpServer::sockets.at(client_1)->state() << "socket1";
     qDebug() << MyTcpServer::sockets.at(1)->state() << "socket2";

     /// Damit die fpm und wpm bei den Clienten angezeigt werden, wird die Connection zu beiden Sockets gekappt.
     MyTcpServer::sockets[client_1]->close();
     MyTcpServer::sockets[client_2]->close();

     if(MyTcpServer::sockets[client_1]->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::sockets[client_1]->abort();

     if(MyTcpServer::sockets[client_2]->state() != QAbstractSocket::UnconnectedState)
         MyTcpServer::sockets[client_2]->abort();
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
