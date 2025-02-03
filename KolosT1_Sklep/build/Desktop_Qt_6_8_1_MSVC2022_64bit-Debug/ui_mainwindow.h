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
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *Lista;
    QLabel *label;
    QTextEdit *WypiszSume;
    QHBoxLayout *horizontalLayout;
    QPushButton *WprowadzDane;
    QPushButton *WprowadzSume;
    QLabel *logo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(843, 656);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Lista = new QTextEdit(centralwidget);
        Lista->setObjectName("Lista");
        Lista->setMinimumSize(QSize(0, 450));
        Lista->setReadOnly(true);

        verticalLayout->addWidget(Lista);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        WypiszSume = new QTextEdit(centralwidget);
        WypiszSume->setObjectName("WypiszSume");
        WypiszSume->setMinimumSize(QSize(0, 30));
        WypiszSume->setReadOnly(true);

        verticalLayout->addWidget(WypiszSume);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        WprowadzDane = new QPushButton(centralwidget);
        WprowadzDane->setObjectName("WprowadzDane");

        horizontalLayout->addWidget(WprowadzDane);

        WprowadzSume = new QPushButton(centralwidget);
        WprowadzSume->setObjectName("WprowadzSume");

        horizontalLayout->addWidget(WprowadzSume);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setMinimumSize(QSize(300, 300));

        horizontalLayout_2->addWidget(logo);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 843, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Suma wszystkich zam\303\263wie\305\204 to: ", nullptr));
        WprowadzDane->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        WprowadzSume->setText(QCoreApplication::translate("MainWindow", "Suma", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
