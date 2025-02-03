#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->stan->addItem("przyjęcie");
    ui->stan->addItem("wydanie");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    int id = ui->id->toPlainText().toInt();
    QString nazwa = ui->nazwa->toPlainText();
    int liczba = ui->liczba->toPlainText().toInt();
    int stan = ui->stan->currentIndex();
    if(liczba < 0) return;
    towar tow(id,nazwa,liczba,stan);
    emit dodaj(tow);
}


void Dialog::on_buttonBox_rejected()
{
    this->close();
}

void Dialog::on_Dialog_finished(int result)
{
    Q_UNUSED(result);
    deleteLater();
}

