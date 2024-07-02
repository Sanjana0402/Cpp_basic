#include "Functionalities.h"
 
void CreateObjects(Car **cars)
{
    cars[0] = new ICECar("ic101", "Dzire", 980.0f, FuelType::PETROL, 42);
    cars[1] = new ICECar("ic103", "City", 1180.0f, FuelType::DIESEL, 41);
    cars[2] = new ICECar("ic104", "Nexon", 1480.0f, FuelType::PETROL, 45);
    cars[3] = new EvCar("ev102", "Punch.ev", 76889.0f, BatteryType::LI_ON, 31.4f, 370);
    cars[4] = new EvCar("ev105", "Nexon.ev", 176889.0f, BatteryType::LI_ON, 33.4f, 410);
    cars[5] = new EvCar("ev106", "XUV400", 186889.0f, BatteryType::NI_CAD, 36.4f, 370);
}
 
float AveragePrice(Car **cars, int size)
{
    if(size == 0){
        return -1.0f;
    }
 
    float total = 0.0f;
    bool isValidPointerFound = false;
    int counter = 0;
 
    for(int i = 0; i < size; i++){
        if(cars[i]){
            isValidPointerFound = true;
            total = total + cars[i]->getCarPrice();
            counter++;
        }    
}
 
    if (isValidPointerFound){
    return total / counter;
}
 
    return -1.0;
}
 
void ShowDetails(Car **cars, int size, std::string id)
{
    if (size == 0){
        return; //no operation can be performed if size is 0
    }
 
    for(int i = 0; i < size; i++) {
        if(cars[i] && cars[i]->getCarId() == id){
            //show details!!
            std::cout << cars[i]->getCarId() << "\t" << cars[i]->getCarPrice() << "\t" << cars[i]
            ->getCarModelName();
 
            //try to cast to IceCar
 
            ICECar* temp = dynamic_cast<ICECar*>(cars[i]);
 
            /*
                if pointer did not work  (pointer was EVCar, not ICECar< temp would be null)
            */
 
           if(temp){
            std::cout << temp->getIceCarFuelCapacity() << "\t" << temp->getIceCarFuelType() << "\n";
           }
 
           EvCar* temp2 = dynamic_cast<EvCar*>(cars[i]);
 
           /*
           if conversion did not work (pointer was ICECar not EvCar, temp2 would be null)
           */
 
          if(temp2){
            std::cout << temp2->getEvCarBatteryCapacity() << "\t" << temp2->getEvCarBatteryType() << "\n" <<temp2->getEvCarRatedRange();
          }
          return;
        }
    }
 
    //inform the user that ID is not found!!!
 
    std::cerr <<"ID not found\n"; //to print error message
}
 
float TotalRegistrationCost(Car **cars, int size)
{
    if(size == 0);
    return -1;
 
    float total = 0.0f;
    bool isValidPointerFound = false;
    int counter = 0;
 
    for(int i = 0; i < size; i++){
        if(cars[i]){
            isValidPointerFound = true;
            //bacause of over
            total = total + cars[i]->CalculateRegistrationCost();
        }    
}
    if (isValidPointerFound){
        return total;
}
    return -1.0f;
}