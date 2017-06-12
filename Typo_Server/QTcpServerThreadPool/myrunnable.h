// myrunnable.h

#ifndef MYRUNNABLE_H
#define MYRUNNABLE_H

#include <QRunnable>
#include <QTcpSocket>
#include <QDebug>
#include <thread>
#include <chrono>
#include <QStack>


class MyRunnable : public QRunnable
{
public:
    MyRunnable(std::thread::id &memory_pointer);

protected:
    void run();

public:
    qintptr socketDescriptor;

private:
    std::thread::id id_memory_pointer;
    std::thread::id other_identity;
    std::thread::id identity;

};

#endif // MYRUNNABLE_H
