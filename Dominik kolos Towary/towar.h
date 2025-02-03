#ifndef TOWAR_H
#define TOWAR_H
#include<QString>

class towar
{

public:
    towar();
    towar(int id_v,QString nazwa_v, int liczba_v,int stan_v);
    ~towar();

    bool operator<(towar &t)
    {
        if(nazwa < t.nazwa) return true;
        else return false;
    }
    int get_id();
    QString get_nazwa();
    int get_liczba_szt();
    int get_stan();
    int id;
    QString nazwa;
    int liczba_szt;
    int stan;
};

#endif // TOWAR_H
