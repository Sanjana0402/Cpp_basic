//implementation file
// cpp file[unofficial]
#include<iostream>
#include "vehicle.h"

// std::string vehicle::brandName = "XYZ";

vehicle::vehicle(int Id,std::string modelname,float price){
    //for this current object being constructed, its vehicleid is assigned the value of id parameter
    this->vehicleId = Id;

    //since data member name and parameter is not the same, we can also omit / drop "this" key word.
    // Modelname = modelname; can also be written
    this->Modelname = modelname;

    //for this current object being constructed, its vehicle price is assigned the value of price parameter
    this->Price = price;
}

vehicle::vehicle(){
    this->vehicleId = -1;
    this->Modelname = "";
    this->Price = 0.0f;
}

vehicle::~vehicle(){
    std::cout<<"Vehicle with ID : "<<vehicleId<<" is deleted\n";
}

// float vehicle::getPrice()
// {
//     return Price;
// }

std:: string vehicle::getModelname(){
    return Modelname;
}

float vehicle::getprice() const
 { return Price; }



