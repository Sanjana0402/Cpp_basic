#ifndef VEHICLE_H
#define VEHICLE_H

#include "VehicleType.h"
#include <iostream>

class Vehicle
{
private:
    std::string _id;
    std::string _name;
    float _price;
    VehicleType _type;
public:
    Vehicle(std::string id, std::string name, float price, VehicleType type);
    virtual float RegistrationCost() const = 0;
    virtual ~Vehicle();

    std::string id() const { return _id; }
};

#endif // VEHICLE_H
