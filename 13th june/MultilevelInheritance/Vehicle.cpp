#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string name, float price, VehicleType type)
{
    this->_id = id;
    this->_name = name;
    this->_price = price;
    this->_type = type;
}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle with ID: " << _id << " is destroyed\n";
}
