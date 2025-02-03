#ifndef KLIENT_H
#define KLIENT_H


#include <QString>

class Klient
{

public:
    Klient();
    ~Klient();
    Klient(QString n, QString a, int w, int r);
    void setNazwa(QString n){nazwa=n;}
    void setAdres(QString a){adres=a;}
    void setWartosc(int w){wartosc = w;}
    void setRabat(int r){rabat=r;}
    QString getNazwa(){return nazwa;}
    QString getAdres(){return adres;}
    int getWartosc(){return wartosc;}
    int getRabat(){return rabat;}
    bool operator<(Klient &k)
    {
        if(wartosc > k.wartosc) return true;
        else return false;
    }
    QString nazwa;
    QString adres;
    int wartosc;
    int rabat;
signals:
};

#endif // KLIENT_H
