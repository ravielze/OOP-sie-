#include "Bus.hpp"

void Bus::PrintInfo()
{
    Kendaraan::PrintInfo();
    cout << kapasitas << endl;
}
Bus::Bus() : Kendaraan::Kendaraan()
{
    this->kapasitas = 0;
}

Bus::Bus(int nomor, int tahunkeluar, string merk, string kategori, int kap) : Kendaraan::Kendaraan(nomor, tahunkeluar, merk, kategori)
{
    this->kapasitas = kap;
}

int Bus::HitungBiayaSewa(int lamaSewa)
{
    return 1000000 * lamaSewa;
}
