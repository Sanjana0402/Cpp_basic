/*
    boiler plate code
*/

#ifndef CAR_H
#define CAR_H

#include "Category.h"
#include "TaxPercentage.h"
#include <iostream>


class Car
{
private:
    /* data */
    std::string m_model_name; // snake case
    unsigned short m_seat_count;
    std::string m_chassis_number;
    Category m_car_category;

public:
  
    Car(std::string model, unsigned short seat_count, std::string chassis_number, Category category);
    ~Car();

    
  // declaration of member function
    TaxPercentage ShowPercentage();
};

#endif // CAR_H

//user defined member functions of a class

//I want to reply to user - what will be applicable tax percentage based on category of Car
/*
    SEDAN : 1%
    HATCHBACK : 2%
    SUV : 7%
    MPG : 10%
*/ 

/*

    destructors are meant for suplimentary actions
    not the actual deletion.


    constructors has to be public as it is outside
    and for execution we need it to be pucblic

*/
/*
    1. How will a new unit of car get initialized? What action will be performed,
    where will memory come from ,etc??

    2. What action will be performed when a unit of data is to be deleted?
    [NOTHING FROM MY END!/SOMETHING]

    3. What operators need to work with a car type data!!! 
        -operations using operators[operator overloading]
        -user defined functions in the class
        - standard library functions???

    4. Should the data support COPY?
        - if yes, what kind of copy [shallow/deep]
*/