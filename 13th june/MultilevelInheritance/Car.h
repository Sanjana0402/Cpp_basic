#ifndef CAR_H
#define CAR_H

#include "CarType.h"
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    CarType _carType;
public:
    Car(std::string id, std::string name, float price, VehicleType vtype, CarType ctype);
    virtual ~Car();

    float RegistrationCost() const ;
};

#endif // CAR_H
