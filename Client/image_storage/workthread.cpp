#include "workthread.h"
#include "mainwindow.h"
#include <QByteArray>
WorkThread::WorkThread(QObject *parent)
    : QThread(parent), socket(nullptr){
}

WorkThread::~WorkThread(){
    delete socket;
}
void WorkThread::run()
{
    socket = new QTcpSocket();
    connect(socket, &QTcpSocket::connected, this, [&]() {                        //连接成功提示
        qDebug() << "Connected to server!";
        socket->write("Hello, server!");
    });

    connect(socket, &QTcpSocket::disconnected, this, &WorkThread::Reconnect);    //连接断了后重连


    socket->connectToHost("192.168.1.103", 8080);                                //

    if (!socket->waitForConnected(3000)) {                                       //超时提醒重连
        qDebug() << "Failed to connect to server:" << socket->errorString();
        Reconnect();
    }
    exec();
    delete socket;
    socket = nullptr;
}

bool WorkThread::Reconnect()                                                      //重连
{
    qDebug() << "TCP disconnected ";
    while(1)
    {
        if(socket->state() == QTcpSocket::UnconnectedState)
           { socket->connectToHost("192.168.1.103", 8080); }
        else
           {return true;}
    }

}

bool WorkThread::SendPwd(const QByteArray &jsonData)                               //发送帐号密码至服务器
{
    qint64 len = socket->write(jsonData);
    if(len <= 0)
    {
        qDebug() << "send jsondata failed";
    }
    if (!socket->waitForReadyRead(5000))
    {
        qWarning() << "Timeout while waiting for data to be received.";
        return false;
    }

     QByteArray receivedData = socket->readAll();                                  //读取服务器返回值
     while (socket->bytesAvailable())
     {
        receivedData += socket->readAll();
     }


     return true;
}




















