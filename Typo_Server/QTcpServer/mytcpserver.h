#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>
#include <QQueue>
#include <QVector>
#include <QStack>

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = 0);

signals:
    void two_clients_signal(int,int);

public slots:

     void newConnection();
     void readyRead();
     void two_clients_slot(int client_1, int client_2);
     void connected();
     void bytes_written(qint64 bytes);

private:
     QTcpServer *server;
     QTcpSocket socket;
     QTcpSocket socket_0;
     QVector<QTcpSocket *> sockets;
     int client_cntr = 0;
     int counter = 0;
     int client_1;
     int client_2;

};

#endif // MYTCPSERVER_H
