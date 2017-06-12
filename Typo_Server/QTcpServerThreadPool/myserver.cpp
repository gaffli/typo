// MyServer.cpp

#include "myserver.h"
#include "myrunnable.h"
#include <QStack>
#include <thread>
#include <qthread.h>
#include <iostream>

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{
    pool = new QThreadPool(this);
    pool->setMaxThreadCount(2);
    if (pool->activeThreadCount()==2)
        qDebug() << "los";


}

void MyServer::startServer()
{

    if(this->listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server started";
    }
    else
    {
        qDebug() << "Server did not start!";
    }
}

void MyServer::incomingConnection(qintptr handle)
{
    // 1. QTcpServer gets a new connection request from a client.
    // 2. It makes a task (runnable) here.
    // 3. Then, the server grabs one of the threads.
    // 4. The server throws the runnable to the thread.

    // Note: Rannable is a task not a thread
    MyRunnable *task = new MyRunnable(&MyServer::id_memory);

    task->setAutoDelete(false);

   task->socketDescriptor = handle;

    pool->start(task);
    qDebug() << "pool started";
    qDebug() << "anzahl threads im pool" << pool->activeThreadCount();

    std::chrono::steady_clock::time_point tp = std::chrono::steady_clock::now() + std::chrono::seconds(5);


    pool->cancel(task);

}
