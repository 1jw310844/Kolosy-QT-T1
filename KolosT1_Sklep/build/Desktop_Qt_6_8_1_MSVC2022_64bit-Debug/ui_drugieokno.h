/********************************************************************************
** Form generated from reading UI file 'drugieokno.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGIEOKNO_H
#define UI_DRUGIEOKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DrugieOkno
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *NazwaPrzycisk;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *AdresPrzycisk;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpinBox *WartoscPrzycisk;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QSpinBox *RabatPrzycisk;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DrugieOkno)
    {
        if (DrugieOkno->objectName().isEmpty())
            DrugieOkno->setObjectName("DrugieOkno");
        DrugieOkno->resize(200, 200);
        DrugieOkno->setMinimumSize(QSize(200, 200));
        DrugieOkno->setMaximumSize(QSize(400, 400));
        horizontalLayout_3 = new QHBoxLayout(DrugieOkno);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(DrugieOkno);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        NazwaPrzycisk = new QLineEdit(DrugieOkno);
        NazwaPrzycisk->setObjectName("NazwaPrzycisk");

        verticalLayout->addWidget(NazwaPrzycisk);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(DrugieOkno);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        AdresPrzycisk = new QLineEdit(DrugieOkno);
        AdresPrzycisk->setObjectName("AdresPrzycisk");

        verticalLayout_2->addWidget(AdresPrzycisk);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(DrugieOkno);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        WartoscPrzycisk = new QSpinBox(DrugieOkno);
        WartoscPrzycisk->setObjectName("WartoscPrzycisk");
        WartoscPrzycisk->setMinimum(1);
        WartoscPrzycisk->setMaximum(999999999);

        verticalLayout_3->addWidget(WartoscPrzycisk);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(DrugieOkno);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        RabatPrzycisk = new QSpinBox(DrugieOkno);
        RabatPrzycisk->setObjectName("RabatPrzycisk");

        verticalLayout_4->addWidget(RabatPrzycisk);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        buttonBox = new QDialogButtonBox(DrugieOkno);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_6->addWidget(buttonBox);


        horizontalLayout_3->addLayout(verticalLayout_6);


        retranslateUi(DrugieOkno);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DrugieOkno, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DrugieOkno, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DrugieOkno);
    } // setupUi

    void retranslateUi(QDialog *DrugieOkno)
    {
        DrugieOkno->setWindowTitle(QCoreApplication::translate("DrugieOkno", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DrugieOkno", "Nazwa", nullptr));
        label_2->setText(QCoreApplication::translate("DrugieOkno", "Adres", nullptr));
        label_3->setText(QCoreApplication::translate("DrugieOkno", "Warto\305\233\304\207", nullptr));
        label_4->setText(QCoreApplication::translate("DrugieOkno", "Rabat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugieOkno: public Ui_DrugieOkno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGIEOKNO_H
