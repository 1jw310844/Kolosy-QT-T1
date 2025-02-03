#ifndef DRUGIEOKNO_H
#define DRUGIEOKNO_H

#include <QDialog>
#include "towar.h"

namespace Ui {
class DrugieOkno;
}

class DrugieOkno : public QDialog
{
    Q_OBJECT

public:
    explicit DrugieOkno(QWidget *parent = nullptr);
    ~DrugieOkno();

private slots:
    void on_stan_triggered(QAction *arg1);

    void on_buttonBox_accepted();

signals:
    void Przeslij(Towar* t);
private:
    Ui::DrugieOkno *ui;
    Towar*towar;
};

#endif // DRUGIEOKNO_H
