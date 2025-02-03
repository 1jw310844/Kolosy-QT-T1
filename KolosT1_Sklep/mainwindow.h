#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "drugieokno.h"
#include<QString>
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_WprowadzDane_clicked();
    void dodaj(Klient k);


    void on_WprowadzSume_clicked();

private:
    Ui::MainWindow *ui;
    QImage *logo_m;
    DrugieOkno* dru;
    std::vector<Klient> lista_klient;
};
#endif // MAINWINDOW_H
