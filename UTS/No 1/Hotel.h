#ifndef __HOTEL_H__
#define __HOTEL_H__
#include "Property.h"
class Hotel : public Property
{
private:
    int star;

public:
    //Default ctor, star = 0
    Hotel();

    //User defined ctor, star = 0
    Hotel(string name, int openYear);
    // Operator Assignment
    Hotel &operator=(const Hotel &);
    void displayInfo() const;
    void set_star(int star);
    int get_star() const;
    float rate() const;
};
#endif // __HOTEL_H__