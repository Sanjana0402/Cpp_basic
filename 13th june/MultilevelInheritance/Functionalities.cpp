#include "Functionalities.h"

void CreateObjects(Vehicle **arr, unsigned int size)
{
    arr[0] = new Car("v101", "XYZ", 9000.0f, VehicleType::PRIVATE, CarType::HATCHBACK);
    arr[1] = new EvCar("v101", "XYZ", 9000.0f, VehicleType::PRIVATE, CarType::HATCHBACK, 33.4f);
}

void Deallocate(Vehicle **arr, unsigned int size)
{
    for(unsigned int i = 0; i < size; i++) {
        delete arr[i];
    }
}
