//header file
//declaration file[unofficial]

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class vehicle
{
private:
    /* data */
    int vehicleId;
    std::string Modelname;
    float Price;
    static std::string brandName;
public:
//declaration of parameterized constructor
    vehicle(int Id,std::string modelname,float price);

//default constructor : declaration
    vehicle();
 
// declaration for destructor
    ~vehicle();

//getter function : access a private data member from outside

    std::string getModelname();

    // float getPrice();

    int getVehicleId() const { return vehicleId; }

    void setVehicleId(int vehicleId_) { vehicleId = vehicleId_; }

    // void setPrice(float price) {this->Price = price; }

    void setModelname(std::string modelname) { Modelname = modelname; }

    float getprice() const;

    void setPrice(float price) { Price = price; }

    static std::string getBrandName() { return vehicle::brandName; }
    static void setBrandName(const std::string &brandName) { vehicle::brandName = brandName; }

};


#endif // VEHICLE_H
