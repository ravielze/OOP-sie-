#include "Mobil.hpp"

void Mobil::PrintInfo()
{
    cout << supir << endl;
}

Mobil::Mobil() : Kendaraan::Kendaraan()
{
    this->supir = "XXXX";
}

Mobil::Mobil(int nomor, int tahunkeluar, string merk, string kategori, string supir) : Kendaraan::Kendaraan(nomor, tahunkeluar, merk, kategori)
{
    this->supir = supir;
}

int Mobil::HitungBiayaSewa(int lamaSewa)
{
    return 500000 * lamaSewa;
}