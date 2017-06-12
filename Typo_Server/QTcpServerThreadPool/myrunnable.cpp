// MyRunnalbe.cpp

#include "myrunnable.h"
#include "myserver.h"
#include <thread>
#include <chrono>
#include <iostream>
#include <QMutex>

MyRunnable::MyRunnable(QStack<std::thread::id> * memory_pointer)
{
  MyRunnable::id_memory_pointer = memory_pointer;
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

    std::thread::id identity = std::this_thread::get_id();
   /* mutex.lock();
    MyRunnable::id_memory_pointer->push_back(identity);
    mutex.unlock();

    std::thread::id * pointer_data = MyRunnable::id_memory_pointer->data();

    for(int i = 0; i < 2;++i)
      std::cout << pointer_data[i] << std::endl;

*/


    std::chrono::steady_clock::time_point tp = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while(1)
      {

        if( std::chrono::steady_clock::now() == tp)
          break;
      }

}
