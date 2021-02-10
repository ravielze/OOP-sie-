#include "DeretLampu.hpp"
#include <iostream>
using namespace std;

Deret_Lampu::Deret_Lampu()
{
    this->MaxEl = 10;
    this->storage = new Lampu[this->MaxEl];
    // Sudah terconstruct dengan default constructor lampu sehingga Neff = Maxel
}

Deret_Lampu::~Deret_Lampu()
{
    delete[] storage;
}

void Deret_Lampu::atur_nyala(int pilih)
{
    int i;
    for (i = 0; i < this->MaxEl; i++)
    {
        if (this->storage[i].get_info())
        {
            this->storage[i].set_mati(pilih);
        }
        else
        {
            this->storage[i].set_nyala(pilih);
        }
    }
}

void Deret_Lampu::PrintDeretLampu()
{
    int i;
    for (i = 0; i < this->MaxEl; i++)
    {
        if (this->storage[i].get_info())
        {
            cout << "O";
        }
        else
        {
            cout << "X";
        }
    }
    cout << endl;
}