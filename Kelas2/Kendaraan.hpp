// Kendaraan.hpp

#ifndef __Kendaraan__HPP__
#define __Kendaraan__HPP__

#include <iostream>
using namespace std;

class Kendaraan
{
private:
    int nomor;
    string kategori;
    string merk;
    int tahunkeluar;

public:
    Kendaraan();
    Kendaraan(int nomor, int tahunkeluar, string merk, string kategori);
    Kendaraan(const Kendaraan &b);
    virtual ~Kendaraan();

    void PrintInfo();
    virtual int HitungBiayaSewa(int lamaSewa) = 0;
};

#endif