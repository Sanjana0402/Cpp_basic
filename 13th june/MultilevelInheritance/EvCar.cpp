#include "EvCar.h"

EvCar::EvCar(std::string id, std::string name, float price, VehicleType vtype, CarType ctype, float capacity)

    : Car(id, name, price, vtype, ctype)
{
    this->_batteryCapacity = capacity;
}

EvCar::~EvCar()
{
    std::cout << "EvCar with ID: " << id() << " deleted\n" ; 
}

float EvCar::RegistrationCost() const
{
    return 10000.0f;
}
