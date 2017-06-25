#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>
#include <QQueue>
#include <QVector>

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

private:
     QTcpServer *server;
     QTcpSocket *socket;
     QQueue<QHostAddress> client_ip;
     QQueue<quint16> client_ports;

};

#endif // MYTCPSERVER_H
