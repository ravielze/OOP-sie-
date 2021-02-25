#ifndef __BUS_HPP__
#define __BUS_HPP__

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

class Bus : public Kendaraan
{
private:
    int kapasitas;

public:
    Bus();
    Bus(int nomor, int tahunkeluar, string merk, string kategori, int kap);
    void PrintInfo();
    int HitungBiayaSewa(int lamaSewa);
};

#endif // __BUS_H__