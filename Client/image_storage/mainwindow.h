#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    bool Register();

signals:
    bool SendPwdtoTCP(const QByteArray &jsonData);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
