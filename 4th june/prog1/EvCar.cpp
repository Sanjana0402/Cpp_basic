#include <iostream>
#include "EvCar.h"


EvCar::EvCar(int id, std::string name,float price,BatteryType type){
    this->carId = id;
    this->carName = name;
    this->carPrice = price;
    this->batteryType= type;
}

EvCar::EvCar(){
    this->carId = -1;
    this->carName = "";
    this->carPrice = 0.0f;
    this->batteryType= BatteryType::OTHER;
}



EvCar::~EvCar()
{
    std::cout<<"Data for EvCar with Id "<<carId<<" is deleted\n";
}

float EvCar::CalculateRegistrationCost()
{
    return 0.0f;
}
