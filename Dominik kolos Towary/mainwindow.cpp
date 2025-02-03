#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QSize dm = ui->image->size();
    logo_m = new QImage(":/tux.png");
    ui->image->setPixmap(QPixmap::fromImage(logo_m->scaled(100,100)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Dodaj_clicked()
{
    di = new Dialog;
    di->setModal(true);
    di->show();
    connect(di,SIGNAL(dodaj(towar)),this,SLOT(dodaj(towar)));
}

void MainWindow::dodaj(towar t)
{
    lista_tow.push_back(t);
    std::sort(lista_tow.begin(),lista_tow.end());
    QString stan;
    ui->lista->clear();
    for(auto t : lista_tow)
    {
        switch (t.get_stan()) {
        case 1:
            stan = "Wydanie";
            break;
        case 0:
            stan = "Przyjecie";
            break;
        default:
            stan = "";
            break;
        }

        ui->lista->append("Identyfikator: "+QString::number(t.get_id()) +" Nazwa: "+ t.get_nazwa()+" Ilość sztuk: "+QString::number(t.get_liczba_szt())+" Stan: "+stan);
    }
}

void MainWindow::on_Wyszukaj_clicked()
{
    ui->wyszukane->clear();
    towar przyjecia_max(0,"Brak",0,0);
    towar wydania_max(0,"Brak",0,0);
    for(auto t : lista_tow)
    {
        if(t.get_stan()==0 && (t.get_liczba_szt() > przyjecia_max.get_liczba_szt())) przyjecia_max = t;
        if(t.get_stan()==1 && (t.get_liczba_szt() > wydania_max.get_liczba_szt())) wydania_max = t;
    }
    ui->wyszukane->append("Najwiecej przyjeć: Identyfikator: "+QString::number(przyjecia_max.get_id()) +" Nazwa: "+ przyjecia_max.get_nazwa());
    ui->wyszukane->append("Najwiecej wydań: Identyfikator: "+QString::number(wydania_max.get_id()) +" Nazwa: "+ wydania_max.get_nazwa());
}

