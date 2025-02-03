#include "towar.h"

towar::towar()
{

}

towar::~towar()
{

}

towar::towar(int id_v,QString nazwa_v, int liczba_v,int stan_v)
{
    this->id = id_v;
    this->nazwa = nazwa_v;
    this->liczba_szt = liczba_v;
    this->stan = stan_v;
}

int towar::get_id()
{
    return id;
}
QString towar::get_nazwa()
{
    return nazwa;
}
int towar::get_liczba_szt()
{
    return liczba_szt;
}
int towar::get_stan()
{
    return stan;
}
