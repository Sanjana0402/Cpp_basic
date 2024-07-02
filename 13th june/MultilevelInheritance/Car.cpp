#include "Car.h"

Car::Car(std::string id, std::string name, float price, VehicleType vtype, CarType ctype)

    : Vehicle(id, name, price, vtype)
{
    this->_carType = ctype;
}

Car::~Car()
{
    std::cout << "Car with ID: " << id() << " is destroyed\n";
}

float Car::RegistrationCost() const
{
    return 20000.0f;
}
