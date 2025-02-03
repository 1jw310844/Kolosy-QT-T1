#include "klient.h"

Klient::Klient()
{}
Klient::~Klient()
{}
Klient::Klient(QString n, QString a, int w, int r)
{
    setNazwa(n);
    setAdres(a);
    setWartosc(w);
    setRabat(r);
}
