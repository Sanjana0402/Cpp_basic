#include "Car.h"
Car::Car(std::string id, std::string name, float price)
{
    this->carId = id;
    this->carModelName = name;
    this->carPrice = price;
}

Car::~Car(){

}