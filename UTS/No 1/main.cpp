#include "Property.h"
#include "Hotel.h"
#include "Hostel.h"
#include <iostream>
using namespace std;

int main()
{
    Hotel hilton = Hotel("Hotel Hilton", 2000);
    Hostel vio = Hostel("Hostel Vio", 2003);
    vio.set_facility(5);
    hilton.set_star(3);
    hilton.displayInfo();

    Hostel anotherOne = vio;
    anotherOne.displayInfo();

    Hotel anotherTwo = hilton;
    anotherTwo.displayInfo();
    // cetak semua property dan informasi semua property
    // [gunakan Property::displayInfo()]
    hilton.Property::displayInfo();
    vio.Property::displayInfo();
}
