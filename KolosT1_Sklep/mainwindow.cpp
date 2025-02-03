#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logo_m = new QImage(":/poli/poli.png");
    QSize rozmiar = ui->logo->size();
    ui->logo->setPixmap(QPixmap::fromImage(logo_m->scaled(rozmiar)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_WprowadzDane_clicked()
{
    dru = new DrugieOkno(this);
    dru->setModal(true);
    dru->show();
    connect(dru, &DrugieOkno::dodaj, this, &MainWindow::dodaj);
}

void MainWindow::dodaj(Klient k)
{
    lista_klient.push_back(k);
    std::sort(lista_klient.begin(),lista_klient.end());
    ui->Lista->clear();
    for(auto k : lista_klient)
    {
        ui->Lista->append("Adres: " + k.getAdres() + " Nazwa: " + k.getNazwa() + " Wartosc zamowienia: " + QString::number(k.getWartosc()));

    }
}

void MainWindow::on_WprowadzSume_clicked()
{
    int sumaZamowien = 0;
    for(auto k: lista_klient)
    {
        sumaZamowien = sumaZamowien+k.getWartosc();
    }
    ui->WypiszSume->setText("Suma zamowien to: " +QString::number(sumaZamowien));
}

