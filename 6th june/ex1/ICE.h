#ifndef ICE_H
#define ICE_H

#include "Car.h"
#include "FuelType.h"

//connect this class as a "subtype" of Car [inheritance syntax]
class ICE : public Car // java: class ICEcar extends car
{
private:
    /* data */
    FuelType iceCarFuelType;
    int iceCarFuelCapacity;
public:
    ICE(std::string id,std::string name,float price) ;
    ~ICE() ;
    float CalculateRegistrationCost();
    
};

#endif // ICE_H
