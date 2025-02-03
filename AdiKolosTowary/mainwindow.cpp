#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    zdjecie=new QImage(":/zdjecie/biedronka.png");
    QSize rozmiar=ui->zdjecie->size();
    ui->zdjecie->setPixmap(QPixmap::fromImage(zdjecie->scaled(rozmiar)));
}

MainWindow::~MainWindow()
{

    delete zdjecie;
    delete ui;

}


void MainWindow::on_wprowadz_clicked()
{
    okno=new DrugieOkno(this);
    connect(okno,SIGNAL(Przeslij(Towar*)),this,SLOT(SprawdzenieDrugiegoOkna(Towar*)));
    okno->exec();
}

bool Porownanie(Towar& t1,Towar& t2){
    QString towar1=t1.getNazwa().toLower();
    QString towar2=t2.getNazwa().toLower();
    return towar1<towar2;
}

void MainWindow::SprawdzenieDrugiegoOkna(Towar* t){

    if(t->getLiczbaSztuk()>0&&t->getId()>0){
        if(!t->getNazwa().isEmpty()){
            if(t->getStan()==Stan::przyjety||t->getStan()==Stan::wydany){
                ui->lista->clear();

                iter=towary.insert(iter,*t);

                iter=towary.begin();
                towary.sort(Porownanie);

                for(auto& tow:towary){
                    if(tow.getStan()==Stan::przyjety){
                        ui->lista->append(" "+QString::number(tow.getId())+" "
                                          +tow.getNazwa()+" "+QString::number(tow.getLiczbaSztuk())
                                          +" Przyjęty");}
                    else if(tow.getStan()==Stan::wydany){
                        ui->lista->append(" "+QString::number(tow.getId())+" "
                                          +tow.getNazwa()+" "+QString::number(tow.getLiczbaSztuk())
                                          +" Wydany");

                    }}


                iter=towary.end();


            }else QMessageBox::warning(this,"Błąd","Błędny stan towaru");


        }else QMessageBox::warning(this,"Błąd","Błędna nazwa towaru");



    }else QMessageBox::warning(this,"Błąd","Błędna liczba sztuk lub ID");
}


void MainWindow::on_pokazmax_clicked()
{
    Towar t1,t2;
    t1.setLiczbaSztuk(0);
    t2.setLiczbaSztuk(0);
    for(auto& t:towary){
        if(t.getStan()==Stan::przyjety){
            if(t1.getLiczbaSztuk()<t.getLiczbaSztuk()){
                t1.setLiczbaSztuk(t.getLiczbaSztuk());
                t1.setNazwa(t.getNazwa());
                t1.setId(t.getId());
            }
        }else if(t.getStan()==Stan::wydany){
            if(t2.getLiczbaSztuk()<t.getLiczbaSztuk()){
                t2.setLiczbaSztuk(t.getLiczbaSztuk());
                t2.setNazwa(t.getNazwa());
                t2.setId(t.getId());
            }
        }
    }
    if(t2.getLiczbaSztuk()==0&&t1.getLiczbaSztuk()==0){
        QMessageBox::about(this,"Brak","Nie znaleziono żadnego maksymalnego zamówienia");
    }

    else if(t2.getLiczbaSztuk()>0&&t1.getLiczbaSztuk()==0){
        QMessageBox::about(this,"Wynik","Największy Wydany Towar: ID: "+QString::number(t2.getId())+" Nazwa: "+t2.getNazwa());
    }
    else if(t2.getLiczbaSztuk()==0&&t1.getLiczbaSztuk()>0){
        QMessageBox::about(this,"Wynik","Największy Przyjęty Towar: ID: "+QString::number(t1.getId())+" Nazwa: "+t1.getNazwa());
    }else{
        QMessageBox::about(this,"Wynik","Największy Przyjęty Towar: ID: "+QString::number(t1.getId())+" Nazwa: "+t1.getNazwa()
                                                                                                                                      +"\nNajwiększy Wydany Towar: ID: "+QString::number(t2.getId())+" Nazwa: "+t2.getNazwa());
    }



}
