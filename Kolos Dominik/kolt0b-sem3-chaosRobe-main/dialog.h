#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "towar.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
signals:
    void dodaj(towar t);
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_Dialog_finished(int result);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
