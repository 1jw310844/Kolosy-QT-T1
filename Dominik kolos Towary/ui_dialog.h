/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextEdit *id;
    QLabel *label_3;
    QTextEdit *nazwa;
    QLabel *label_2;
    QTextEdit *liczba;
    QLabel *label;
    QComboBox *stan;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        id = new QTextEdit(Dialog);
        id->setObjectName("id");
        id->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(id);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        nazwa = new QTextEdit(Dialog);
        nazwa->setObjectName("nazwa");
        nazwa->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(nazwa);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        liczba = new QTextEdit(Dialog);
        liczba->setObjectName("liczba");
        liczba->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(liczba);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        stan = new QComboBox(Dialog);
        stan->setObjectName("stan");

        verticalLayout_2->addWidget(stan);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Identyfikator", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Nazwa", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Ilosc", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Stan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
