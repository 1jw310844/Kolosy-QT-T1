towar.h
#include "towar.h"

Towar::Towar(QObject *parent)
    : QObject{parent}
{

}
Towar::Towar(const Towar& t){
    liczbaSztuk=t.liczbaSztuk;
    nazwa=t.nazwa;
    stan=t.stan;
    iden=t.iden;
}
