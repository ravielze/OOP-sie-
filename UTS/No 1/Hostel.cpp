#include "Hostel.h"
#include <iostream>
Hostel::Hostel() : Property()
{
    this->facility = 0;
}

Hostel::Hostel(string name, int openYear) : Property(name, "hostel", openYear)
{
    this->facility = 0;
}

Hostel &Hostel::operator=(const Hostel &o)
{
    Property::operator=(o);
    this->facility = o.facility;
}

void Hostel::displayInfo() const
{
    Property::displayInfo();
    cout << "Expense: " << this->calculateFacility() << endl;
}

void Hostel::set_facility(int facility)
{
    this->facility = facility;
}

int Hostel::get_facility() const
{
    return this->facility;
}

float Hostel::rate() const
{
    return 10000 * (10 + get_age()); //Asumsi harganya 100000 dan naik 10% untuk satu tahun umur
}

float Hostel::calculateFacility() const
{
    return 80000 * this->facility;
}
