#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTcpServer>

class MyTcpSocket : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpSocket(QObject *parent = 0);
    
    void doConnect();

signals:
    void first_socked_finish();

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void socket_after_socket();

private:
    QTcpSocket *socket;
    int socketport = 4321;
};

#endif // MYTCPSOCKET_H
