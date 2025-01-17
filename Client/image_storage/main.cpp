#include "mainwindow.h"
#include "workthread.h"
#include <QApplication>
#include <QTcpSocket>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    WorkThread tcp_thread;
    tcp_thread.start();
    QObject::connect(&w, &MainWindow::SendPwdtoTCP, &tcp_thread, &WorkThread::SendPwd);

    return a.exec();

}
