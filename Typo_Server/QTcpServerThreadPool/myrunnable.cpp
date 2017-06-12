// MyRunnalbe.cpp

#include "myrunnable.h"
#include "myserver.h"
#include <thread>
#include <chrono>
#include <iostream>
#include <QMutex>

MyRunnable::MyRunnable(std::thread::id& memory_pointer)
{
  &MyRunnable::id_memory_pointer = memory_pointer;
}

void MyRunnable::run()
{
    QMutex mutex;
    if(!socketDescriptor) return;

    QTcpSocket socket;
    socket.setSocketDescriptor(socketDescriptor);

    socket.write("From server: Hallo , warten auf 2 Spieler");
    socket.flush();
    socket.waitForBytesWritten();
    socket.close();

    MyRunnable::identity = std::this_thread::get_id();
    std::this_thread::

    mutex.lock();

    if (MyRunnable::id_memory_pointer != 0)
    {

            MyRunnable::other_identity = MyRunnable::id_memory_pointer;
    }
    else if (MyRunnable::id_memory_pointer == 0)
    {
        MyRunnable::id_memory_pointer = identity;
    }

    mutex.unlock();

    qDebug() << MyRunnable::identity;
    qDebug() << MyRunnable::other_identity;

    std::chrono::steady_clock::time_point tp = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while(1)
      {

        if( std::chrono::steady_clock::now() == tp)
          break;
      }

}
