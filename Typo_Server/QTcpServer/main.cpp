#include <QCoreApplication>
#include "mytcpserver.h"

#pragma comment(lib, "Ws2_32.lib")

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // create MyTcpServer
    // MyTcpServer constructor will create QTcpServer

    MyTcpServer server;

    return a.exec();
}
