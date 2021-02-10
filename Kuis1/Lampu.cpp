#include "Lampu.hpp"
using namespace std;

int Lampu::nomor = 1;

Lampu::Lampu()
{
    this->id = nomor;
    this->nyala = false;
    nomor++;
}

void Lampu::set_nyala(int pilihan)
{
    if (!this->nyala && this->id % pilihan == 0)
    {
        this->nyala = true;
    }
}

void Lampu::set_mati(int pilihan)
{
    if (this->nyala && this->id % pilihan == 0)
    {
        this->nyala = false;
    }
}

bool Lampu::get_info() const
{
    return this->nyala;
}