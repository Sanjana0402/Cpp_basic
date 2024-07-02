#include "Car.h"

//for member functions, use ,classname::function_name syntax

Car::Car(std::string model, unsigned short seat_count,std::string chassis_number, Category category)
{
    this->m_car_category=category;
    this->m_chassis_number=chassis_number;
    this->m_model_name=model;
    this->m_seat_count=seat_count;
}

Car::~Car() 
{
    std::cout<<"Object with chassis number "<<this->m_chassis_number<<" is destroyed\n";
}

TaxPercentage Car::ShowPercentage()
{
    TaxPercentage result = TaxPercentage::_1_percent; //default initialization

    if(this->m_car_category==Category::HATCHBACK){
        result = TaxPercentage::_2_percent;
    }

    else if(this->m_car_category==Category::SEDAN){
        result = TaxPercentage::_1_percent;
    }

    else if(this->m_car_category==Category::MPG){
        result = TaxPercentage::_10_percent;
    }

    else {
        result = TaxPercentage::_7_percent;
    }
    return result;
}