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
    void signal_other_f_w_pm(int,int);
    void writing_done();
    void signal_txt_nmbr(char);
    void scnd_plr_con();

public slots:
    void connected();
    void bytesWritten(qint64 bytes);
    //void socket_after_socket();
    //void newConnection();
    void readyRead_new();
    void newdisconnected();
    void set_variables(int, int);

private:
    QTcpSocket *socket;
    QTcpSocket *new_socket;
    QTcpServer *server;
    int socketport = 4322;
    int fpm = 0;
    int wpm = 0;
    char txt_nmbr = 0;
    short counter_message;
    QByteArray other_fpm;
    QByteArray other_wpm;
};

#endif // MYTCPSOCKET_H
