#ifndef __HOSTEL_H__
#define __HOSTEL_H__

#include "Property.h"
class Hostel : public Property
{
private:
    int facility;

public:
    // Default ctor
    // facility = 0
    Hostel();

    // User defined ctor, facility = 0
    Hostel(string name, int openYear);
    // Operator Assignment
    Hostel &operator=(const Hostel &);
    void displayInfo() const;
    void set_facility(int facility);
    int get_facility() const;
    float rate() const;
    float calculateFacility() const;
};
#endif // __HOSTEL_H__