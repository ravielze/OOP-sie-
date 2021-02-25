#ifndef __MOBIL_H__
#define __MOBIL_H__

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

class Mobil : public Kendaraan
{
private:
    string supir;

public:
    Mobil();
    Mobil(int nomor, int tahunkeluar, string merk, string kategori, string supir);
    void PrintInfo();
    int HitungBiayaSewa(int lamaSewa);
};

#endif // __MOBIL_H__