/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *image;
    QTextEdit *wyszukane;
    QTextEdit *lista;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Dodaj;
    QPushButton *Wyszukaj;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, -1, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setMaximumSize(QSize(800, 948));
        image->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(image);

        wyszukane = new QTextEdit(centralwidget);
        wyszukane->setObjectName("wyszukane");
        wyszukane->setMaximumSize(QSize(500, 100));
        wyszukane->setReadOnly(true);

        verticalLayout_5->addWidget(wyszukane);


        horizontalLayout_3->addLayout(verticalLayout_5);

        lista = new QTextEdit(centralwidget);
        lista->setObjectName("lista");
        lista->setReadOnly(true);

        horizontalLayout_3->addWidget(lista);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Dodaj = new QPushButton(centralwidget);
        Dodaj->setObjectName("Dodaj");

        horizontalLayout_2->addWidget(Dodaj);

        Wyszukaj = new QPushButton(centralwidget);
        Wyszukaj->setObjectName("Wyszukaj");

        horizontalLayout_2->addWidget(Wyszukaj);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        image->setText(QString());
        Dodaj->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        Wyszukaj->setText(QCoreApplication::translate("MainWindow", "Wyszukaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
