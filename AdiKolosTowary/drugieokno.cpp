#include "drugieokno.h"
#include "ui_drugieokno.h"

DrugieOkno::DrugieOkno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrugieOkno)
{
    ui->setupUi(this);
    ui->liczbasztuk->setRange(0,1000);
    ui->identyfikator->setRange(0,1000);
    QAction* Przyjeto = new QAction("Przyjeto");
    QAction* Wydano = new QAction("Wydano");
    ui->stan->addAction(Przyjeto);
    ui->stan->addAction(Wydano);
    ui->stan->setPopupMode(QToolButton::MenuButtonPopup);
    towar=new Towar(this);
}

DrugieOkno::~DrugieOkno()
{
    delete ui;
}

void DrugieOkno::on_stan_triggered(QAction *arg1)
{
    if(arg1->text()=="Przyjeto"){
        ui->stan->setText("Przyjeto");
        towar->setStan(Stan::przyjety);
    }else if(arg1->text()=="Wydano"){

        ui->stan->setText("Wydano");
        towar->setStan(Stan::wydany);
    }
}


void DrugieOkno::on_buttonBox_accepted()
{
    towar->setLiczbaSztuk(ui->liczbasztuk->value());
    towar->setId(ui->identyfikator->value());
    towar->setNazwa(ui->nazwa->text());

    emit Przeslij(towar);
}
