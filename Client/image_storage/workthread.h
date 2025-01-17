#ifndef WORKTHREAD_H
#define WORKTHREAD_H
#include <QThread>
#include <QTcpSocket>

class WorkThread : public QThread
{
public:
    WorkThread(QObject *parent = nullptr);
    ~WorkThread();

protected:
    void run() override;

private:
    QTcpSocket *socket;

private slots:
    bool Reconnect();

public slots:
    bool SendPwd(const QByteArray &jsonData);


};

#endif // WORKTHREAD_H
