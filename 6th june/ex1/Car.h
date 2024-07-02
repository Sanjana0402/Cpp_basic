#ifndef CAR_H
#define CAR_H

#include<string.h>

class Car
{
private:
    /* data */
    std::string carId;
    std::string carModelName;
    float carPrice;
public:
    Car(std::string id,
    std::string name,
    float price);
    
    ~Car();

    std::string getCarId() const { 
        return carId; 
    }

    virtual float CalculateRegistrationCost() = 0;
    // abstract float CalculateRegistrationCost() for java users
};

#endif // CAR_H
