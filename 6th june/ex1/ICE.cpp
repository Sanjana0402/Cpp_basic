#include "ICE.h"

ICE::ICE(std::string id, std::string name, float price , FuelType
type, int capacity) : Car(id, name, price)
{
    this->iceCarFuelCapacity = capacity;
    this->iceCarFuelType = type;
}

ICE::~ICE()
{
    std::<<"ICE Car with ID : "<<this->getCarId() <<"is deleted\n";
}
