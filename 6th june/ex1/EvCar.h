#ifndef EVCAR_H
#define EVCAR_H
#include "Car.h"
#include "BatteryType.h"

class EvCar
{
private:
    /* data */
    BatterType evBatteryType;
    float evBatteryCapacity;
    unsigned int evRatedRange;
public:
    EvCar(std::string id,std::string name,float price, BatterType type, float capacity, unsigned int range) ;
    
    ~EvCar() ;
    float CalculateRegistrationCost();
};

#endif // EVCAR_H
