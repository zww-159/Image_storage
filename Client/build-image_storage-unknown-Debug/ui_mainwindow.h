/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *ssid;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *pwd;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *register_2;
    QPushButton *login;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *choose;
    QSpacerItem *horizontalSpacer;
    QPushButton *upload;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *flush;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(646, 492);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ssid = new QLineEdit(centralWidget);
        ssid->setObjectName(QString::fromUtf8("ssid"));
        ssid->setMinimumSize(QSize(275, 25));
        ssid->setMaximumSize(QSize(275, 25));
        ssid->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(ssid);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pwd = new QLineEdit(centralWidget);
        pwd->setObjectName(QString::fromUtf8("pwd"));
        pwd->setMinimumSize(QSize(275, 25));
        pwd->setMaximumSize(QSize(275, 25));

        verticalLayout_2->addWidget(pwd);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        register_2 = new QPushButton(centralWidget);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setMinimumSize(QSize(0, 25));
        register_2->setMaximumSize(QSize(60, 16777215));

        verticalLayout_3->addWidget(register_2);

        login = new QPushButton(centralWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMinimumSize(QSize(0, 25));
        login->setMaximumSize(QSize(60, 16777215));

        verticalLayout_3->addWidget(login);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(275, 325));
        listWidget->setMaximumSize(QSize(275, 325));

        verticalLayout_4->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        choose = new QPushButton(centralWidget);
        choose->setObjectName(QString::fromUtf8("choose"));
        choose->setMinimumSize(QSize(150, 25));
        choose->setMaximumSize(QSize(150, 25));

        horizontalLayout->addWidget(choose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        upload = new QPushButton(centralWidget);
        upload->setObjectName(QString::fromUtf8("upload"));
        upload->setMinimumSize(QSize(60, 25));
        upload->setMaximumSize(QSize(60, 25));

        horizontalLayout->addWidget(upload);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setMinimumSize(QSize(275, 325));
        listWidget_2->setMaximumSize(QSize(275, 325));

        verticalLayout_5->addWidget(listWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        flush = new QPushButton(centralWidget);
        flush->setObjectName(QString::fromUtf8("flush"));
        flush->setMinimumSize(QSize(60, 25));
        flush->setMaximumSize(QSize(60, 25));

        horizontalLayout_2->addWidget(flush);


        verticalLayout_5->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 28));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        choose->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\234\254\345\234\260\346\226\207\344\273\266\357\274\210\345\244\232\351\200\211", nullptr));
        upload->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240", nullptr));
        flush->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
