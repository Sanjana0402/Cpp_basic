
#include "vehicle.h"


int main(){
    // vehicle v1(101,"Honda City",14000000.0f);
    vehicle* v2 = new vehicle();

    v2->setVehicleId (198);
    v2->setModelname("Kiger");
    v2->setPrice(98766.0f);

    std::cout << "Updated ID is : "<< v2->getVehicleId()<<"\n";

    delete v2;
}