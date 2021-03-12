#include "Hotel.h"
#include <iostream>
Hotel::Hotel() : Property()
{
    this->star = 0;
}

Hotel::Hotel(string name, int openYear) : Property(name, "hotel", openYear)
{
    this->star = 0;
}

Hotel &Hotel::operator=(const Hotel &o)
{
    Property::operator=(o);
    this->star = o.star;
}

void Hotel::displayInfo() const
{
    Property::displayInfo();
    cout << "Total Rate: " << this->rate() * this->star << endl;
}

void Hotel::set_star(int star)
{
    this->star = star;
}

int Hotel::get_star() const
{
    return this->star;
}

float Hotel::rate() const
{
    return 50000 * (10 + get_age()); //Asumsi harganya 50000 dan naik 10% untuk satu tahun umur
}
