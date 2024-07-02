#ifndef EVCAR_H
#define EVCAR_H

#include "BatteryType.h"
#include <iostream>

class EvCar
{
private:
    /* data */
    unsigned int carId;
    std::string carName;
    float carPrice;
    enum BatteryType batteryType;

public:
    EvCar(int id, std::string name,float price,enum BatteryType type);
    
    EvCar();
    
    ~EvCar();

    // unsigned int getCarId() const { return carId; }

    // void setCarId(unsigned int carId_) { carId = carId_; }

    std::string getCarName() const { return carName; }

    void setCarName(const std::string &carName_) { carName = carName_; }

    float getCarPrice() const { return carPrice; }

    void setCarPrice(float carPrice_) { carPrice = carPrice_; }

    enum BatteryType getBatteryType() const { return batteryType; }
    
    void setBatteryType(const enum BatteryType &batteryType_) { batteryType = batteryType_; }


    unsigned int getCarId() const { return carId; }
    
    void setCarId(unsigned int carId_) { carId = carId_; }
};

#endif // CAR_H
