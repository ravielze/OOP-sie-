#include "Kendaraan.hpp"

Kendaraan::Kendaraan()
{
    this->nomor = 0;
    this->tahunkeluar = 0;
    this->merk = "XXX";
    this->kategori = "mobil";
}

Kendaraan::Kendaraan(int nomor, int tahunkeluar, string merk, string kategori)
{
    this->nomor = nomor;
    this->tahunkeluar = tahunkeluar;
    this->merk = merk;
    this->kategori = kategori;
}

Kendaraan::Kendaraan(const Kendaraan &b)
{
    this->nomor = b.nomor;
    this->tahunkeluar = b.tahunkeluar;
    this->merk = b.merk;
    this->kategori = b.kategori;
}

Kendaraan::~Kendaraan()
{
}

void Kendaraan::PrintInfo()
{
    cout << nomor << endl;
    cout << tahunkeluar << endl;
    cout << merk << endl;
    cout << kategori << endl;
}