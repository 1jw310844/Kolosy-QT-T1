#ifndef DRUGIEOKNO_H
#define DRUGIEOKNO_H

#include <QDialog>
#include "klient.h"

namespace Ui {
class DrugieOkno;
}

class DrugieOkno : public QDialog
{
    Q_OBJECT

public:
    explicit DrugieOkno(QWidget *parent = nullptr);
    ~DrugieOkno();
signals:
    void dodaj(Klient k);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DrugieOkno *ui;
    Klient* k;
};

#endif // DRUGIEOKNO_H
