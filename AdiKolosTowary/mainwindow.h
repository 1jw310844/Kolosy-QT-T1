#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "drugieokno.h"
#include <QImage>
#include <QPixmap>
#include <QMessageBox>>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECTj

    public:
             MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_wprowadz_clicked();
    void SprawdzenieDrugiegoOkna(Towar* t);

    void on_pokazmax_clicked();

private:
    Ui::MainWindow *ui;
    QImage* zdjecie;
    DrugieOkno* okno;
    std::list<Towar> towary;
    std::list<Towar>::iterator iter=towary.begin();

};
#endif // MAINWINDOW_H
