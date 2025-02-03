#include "drugieokno.h"
#include "ui_drugieokno.h"

DrugieOkno::DrugieOkno(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DrugieOkno)
{
    ui->setupUi(this);
}

DrugieOkno::~DrugieOkno()
{
    delete ui;
}

void DrugieOkno::on_buttonBox_accepted()
{
    int rabat = ui->RabatPrzycisk->value();
    double rabatDziesietny = rabat / 100.0;
    int wartoscPoczatkowa = ui->WartoscPrzycisk->value();
    int wartoscPoRabacie = wartoscPoczatkowa * (1 - rabatDziesietny);
    QString nazwa = ui->NazwaPrzycisk->text();
    QString adres = ui->AdresPrzycisk->text();
    Klient k(nazwa, adres, wartoscPoRabacie, rabat);
    emit dodaj(k);
}


