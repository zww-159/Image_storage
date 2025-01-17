#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workthread.h"
#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QJsonObject>
#include <QJsonDocument>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->register_2, &QPushButton::clicked, this, &MainWindow::Register);
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::Register()
{
    if(ui->ssid->text().isEmpty() || ui->pwd->text().isEmpty())
    {
        QDialog dialog1;
        QMessageBox::warning(&dialog1, "警告", "账号或密码不能为空", QMessageBox::Ok);
        return false;
    }

    QString ssid = ui->ssid->text();
    QString pwd = ui->pwd->text();
    QByteArray hash = QCryptographicHash::hash(pwd.toUtf8(), QCryptographicHash::Md5);  //md5加密

    QJsonObject jsonObject;
    jsonObject["type"] = "regist_request";
    jsonObject["username"] = ssid;
    jsonObject["password"] = QString(hash.toHex()); // 将加密后的密码（十六进制格式）存入 JSON 对象
    QJsonDocument jsonDoc(jsonObject);  // 将 JSON 对象转换为 JSON 文档
    QByteArray jsonData = jsonDoc.toJson();  // 将 JSON 文档序列化为字节数组，便于传输
    qDebug() << jsonData;

    emit SendPwdtoTCP(jsonData);  //发给TCPsocket
    return true;
}



