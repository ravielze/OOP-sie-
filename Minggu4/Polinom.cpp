#include "Polinom.hpp"
#include <iostream>
#include <math.h>
using namespace std;

Polinom::Polinom()
{
    this->derajat = 0;
    this->koef = new int[this->derajat + 1];
    this->koef[0] = 0;
}

Polinom::Polinom(int x)
{
    this->derajat = x;
    this->koef = new int[this->derajat + 1];
    for (int i = 0; i <= derajat; i++)
    {
        setKoefAt(i, 0);
    }
}

Polinom::Polinom(const Polinom &oth)
{
    this->derajat = oth.getDerajat();
    this->koef = new int[this->derajat + 1];
    for (int i = 0; i <= this->derajat; i++)
    {
        this->koef[i] = oth.koef[i];
    }
}

Polinom::~Polinom()
{
    delete[] this->koef;
}

Polinom &Polinom::operator=(const Polinom &oth)
{
    delete[] this->koef;
    this->derajat = oth.derajat;
    this->koef = new int[this->derajat + 1];
    int i;
    for (i = 0; i < this->derajat; i++)
    {
        this->koef[i] = oth.koef[i];
    }
}

int Polinom::getKoefAt(int idx) const
{
    return this->koef[idx];
}

int Polinom::getDerajat() const
{
    return this->derajat;
}

void Polinom::setKoefAt(int idx, int val)
{
    this->koef[idx] = val;
}

void Polinom::setDerajat(int d)
{
    int i;
    int tempSize = this->derajat + 1;

    int *temp = new int[tempSize];
    for (i = 0; i < tempSize; i++)
    {
        temp[i] = this->koef[i];
    }

    this->derajat = d;
    delete[] this->koef;
    this->koef = new int[d + 1];
    for (i = 0; i < tempSize; i++)
    {
        this->koef[i] = temp[i];
    }
}

void Polinom::input()
{
    for (int i = 0; i <= this->derajat; i++)
    {
        cin >> this->koef[i];
    }
}

void Polinom::printKoef()
{
    for (int i = 0; i <= this->derajat; i++)
    {
        cout << this->koef[i] << endl;
    }
}

int Polinom::substitute(int n)
{
    int hasil = 0;
    for (int i = 0; i <= this->derajat; i++)
    {
        hasil += this->koef[i] * pow(n, i);
    }
    return hasil;
}

void Polinom::print()
{
    bool isFirst = true;
    if (this->koef[0] != 0)
    {
        cout << this->koef[0];
        isFirst = false;
    }
    for (int i = 1; i <= this->derajat; i++)
    {
        if (this->koef[i] != 0)
        {
            cout << (this->koef[i] < 0 ? "" : (isFirst) ? ""
                                                        : "+");
            cout << this->koef[i];
            cout << "x^" << i;
            isFirst = false;
        }
    }

    cout << endl;
}