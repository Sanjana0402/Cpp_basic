#include "Car.h"
#include "ICECar.h"

int main(){
    // ICECar c1(101,"Dzire",845000.f,FuelType::PETROL,42);
    Car* cars[6];
    CreateObjects[cars];
    AveragePrice(cars,6);
    TotalRegistrationCost(cars,6);
    ShowDetails(cars,6,"ic101");
    DeallocateHeap(cars,6);
}