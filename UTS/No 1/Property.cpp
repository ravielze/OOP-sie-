#include <iostream>
#include "Property.h"

Property::Property(string name, string type, int openYear)
{
    this->name = name;
    this->type = type;
    this->openYear = openYear;
}

Property::Property()
{
    this->name = "noname";
    this->openYear = 1900;
    this->type = "none";
}

Property &Property::operator=(const Property &o)
{
    this->name = o.name;
    this->openYear = o.openYear;
    this->type = o.type;
}

void Property::set_name(string name)
{
    this->name = name;
}

string Property::get_name() const
{
    return this->name;
}

void Property::set_type(string type)
{
    this->type = type;
}

string Property::get_type() const
{
    return this->type;
}

int Property::get_age() const
{
    return CURRENT_YEAR - this->openYear;
}

void Property::displayInfo() const
{
    cout << "Nama: " << this->get_name() << endl;
    cout << "Umur: " << this->get_age() << endl;
    cout << "Type: " << this->get_type() << endl;
    cout << "Rate: " << this->rate() << endl;
}
