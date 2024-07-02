#ifndef EVCAR_H
#define EVCAR_H

#include "Car.h"

class EvCar : public Car
{
private:
    float _batteryCapacity;
public:
    EvCar(std::string id, std::string name, float price, VehicleType vtype, CarType ctype, float capacity);
    ~EvCar();
    
    float RegistrationCost() const ;

};

#endif // EVCAR_H
