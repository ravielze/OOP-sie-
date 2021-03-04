#include "Bike.h"
#include "Car.h"
#include "Vehicle.h"

int main()
{
    Car *firstCar = new Car(4);
    Car *secondCar = new Car(10);
    Bike *theBike = new Bike();
    Vehicle *copiedBikeAsVehicle = new Vehicle(*theBike);
    delete theBike;
    secondCar->Vehicle::drive();
    copiedBikeAsVehicle->Vehicle::clean();
    firstCar->drive();
    copiedBikeAsVehicle->Vehicle::park();
    delete secondCar;
    delete copiedBikeAsVehicle;
    delete firstCar;
}