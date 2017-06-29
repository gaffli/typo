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
    void two_clients_signal();

public slots:

     void newConnection();
     void readyRead();
     void two_clients_slot();
     void connected();
     void bytes_written(qint64 bytes);

private:
     QTcpServer *server;
     QTcpSocket socket;
     QStack<QHostAddress> client_ip;
     QStack<quint16> client_ports;
     QTcpSocket *socket_1 = new QTcpSocket();
     QTcpSocket *socket_2 = new QTcpSocket();
     QTcpSocket socket_0;
     int counter = 0;
     QVector<QTcpSocket *> sockets;
     QVector<QTcpSocket *> sockets2;
     QVector<QTcpSocket *> sockets3;
     bool first = true;

};

#endif // MYTCPSERVER_H
