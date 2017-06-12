// MyServer.h

#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QThreadPool>
#include <QDebug>
#include <QStack>
#include <thread>
#include <qthread.h>


class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);
    void startServer();
    QStack<std::thread::id> * id_memory;

protected:
    void incomingConnection( qintptr handle );

signals:

public slots:

private:
    QThreadPool *pool;
};

#endif // MYSERVER_H
