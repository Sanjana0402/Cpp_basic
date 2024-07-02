#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
 
#include "Car.h"
#include "ICECar.h"
#include "EvCar.h"
 
/*
    create 3 objects of ICECar and EvCar each o the heap.
    [Can we store them in the same array?]
 
    Pass an array of pointers (initially set to null)
    Then, create objects on the heap amnd store their pointers in the array
*/
 
void CreateObjects(Car** cars);
 
 
/*
    Pass an array of cars. Run a loop and calculate total of carPrice using getter
    Return total / size as average
 
*/
 
float AveragePrice(Car** cars, int size);
 
/*
    Show details using car ID received as a parameter
*/
 
void ShowDetails(Car** cars, int size, std::string id);
 
/*
    Print total Registration Cost for all cars
*/
 
float TotalRegistrationCost(Car** cars, int size);
 
#endif // FUNCTIONALITIES_H
 