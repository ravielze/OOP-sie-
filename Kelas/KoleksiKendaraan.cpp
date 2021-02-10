#include "KoleksiKendaraan.hpp"
KoleksiKendaraan::KoleksiKendaraan()
{
    this->neff = 0;
    this->maxEl = 1000;
    this->storage = new Kendaraan[this->maxEl];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan &b)
{
    this->neff = b.neff;
    this->maxEl = b.maxEl;
    this->storage = new Kendaraan[this->maxEl];
    for (int i = 0; i < this->maxEl; i++)
    {
        this->storage[i] = b.storage[i];
    }
}

KoleksiKendaraan::KoleksiKendaraan(int size)
{
    this->neff = 0;
    this->maxEl = size;
    this->storage = new Kendaraan[this->maxEl];
}

KoleksiKendaraan::~KoleksiKendaraan()
{
    delete[] this->storage;
}

void KoleksiKendaraan::PrintAll()
{
    if (this->neff >= 1)
    {
        for (i = 0; i < this->neff; i++)
        {
            this->storage[i].PrintInfo();
        }
    }
}

void KoleksiKendaraan::operator<<(Kendaraan &k)
{
    if (this->neff < this->maxEl)
    {
        this->storage[this->neff] = k;
        this->neff++;
    }
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan &kk)
{
    int i = 0;
    if (kk.neff >= 1)
    {
        for (i = 0; i < kk.neff; i++)
        {
            this->operator<<(kk.storage[i]);
        }
    }
}
