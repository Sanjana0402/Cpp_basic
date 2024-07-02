#include "EvCar.h"

EvCar::EvCar(std::string id,std::string name,float price, BatterType type, float capacity, unsigned int range ) : Car(id,name,price)
{
    this->evBatteryCapacity = capacity;
    this->evBatteryType = type;
    this->evRatedRange = range;
}

EvCar::~EvCar{
     std::<<"EV Car with ID : "<<this->getCarId() <<"is deleted\n";
}