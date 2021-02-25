#ifndef __MINIBUS_H__
#define __MINIBUS_H__

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

class Minibus : public Kendaraan
{

public:
    Minibus();
    Minibus(int nomor, int tahunkeluar, string merk, string kategori);
    void PrintInfo();
    float CalculateDiscount(int lamaSewa);
    int HitungBiayaSewa(int lamaSewa);
};

#endif // __MINIBUS_H__