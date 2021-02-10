// KoleksiKendaraan.hpp

#ifndef __KoleksiKendaraan__HPP__
#define __KoleksiKendaraan__HPP__

#include <iostream>
#include "Kendaraan.hpp"
using namespace std;

class KoleksiKendaraan
{
private:
    Kendaraan *storage;
    int neff;
    int maxEl;

public:
    KoleksiKendaraan();
    KoleksiKendaraan(int size);
    KoleksiKendaraan(const KoleksiKendaraan &b);
    ~KoleksiKendaraan();

    void PrintAll();
    void operator<<(Kendaraan &k);
    void operator<<(KoleksiKendaraan &kk);
};

#endif