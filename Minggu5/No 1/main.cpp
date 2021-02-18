#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
/*
ctor vehicle 3 2 v
cctor vehicle 3 2 v
ctor vehicle 6 50 v
ctor vehicle 4 8 v
ctor car 4 8 v
cctor vehicle 4 8 v
cctor car 4 8 v
ctor vehicle 4 6 v
ctor car 4 6 v
ctor vehicle 2 2 v
ctor bike 2 2 v
someone is driving this car 4 6
wheels 2 capacity 2
someone is riding this bike2 2
dtor bike 2 2
dtor vehicle 2 2
dtor car 4 6
dtor vehicle 4 6
dtor car 4 8
dtor vehicle 4 8
dtor car 4 8
dtor vehicle 4 8
dtor vehicle 6 50
dtor vehicle 3 2
dtor vehicle 3 2
 */
int main()
{
    Vehicle *veh_3_2 = new Vehicle(3, 2);
    Vehicle *copy_veh_3_2 = new Vehicle(*veh_3_2);
    Vehicle *veh_6_50 = new Vehicle(6, 50);
    Car *car_8 = new Car(8);
    Car *copy_car_8 = new Car(*car_8);
    Car *car_6 = new Car(6);
    Bike *bike = new Bike();
    car_6->drive();
    bike->show();
    bike->ride();
    delete bike;
    delete car_6;
    delete car_8;
    delete copy_car_8;
    delete veh_6_50;
    delete veh_3_2;
    delete copy_veh_3_2;
    return 0;
}