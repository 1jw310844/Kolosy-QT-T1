#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "towar.h"
#include<QString>
#include <QImage>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Dodaj_clicked();
    void dodaj(towar t);

    void on_Wyszukaj_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *di;
    std::vector<towar> lista_tow;
    QImage *logo_m;
};
#endif // MAINWINDOW_H
