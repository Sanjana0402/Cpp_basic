#include "EvCar.h"


/*
    This function finds the average price from array of EvCar pointers
*/

float AveragePrice(EvCar** arr,int size){
    if(size==0){
        return -1.0f;
    }

    float total = 0.0f;
    bool flag = false;
    unsigned int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]){//if pointer is i index IS NOT NULL POINTER/if pointer is invalid.
            flag = true;//at least one valid data found
            total = total + arr[i]->getCarPrice();
            count++;
        }
    }

    if (flag){
        return total/count;
    }
    return -1;//in case flag is false and we reach this line 26

}

/*
    search battery type by providing id, if id is not found,........?
    problem 1 : array is null pointer
    problem 2 : some pointers in the array are null
    problem 3 : array is fine, id is invalid
*/
BatteryType FindBatteryTypeById(EvCar** arr,int size, unsigned int id){

    if(size == 0){
        return BatteryType::NA_INVALID;
    }
    /*
        if arr pointer is valid
        AND
        id value for arr[i] (found by getter) is equal to id to be searched

`               ------> return battery type for arr[i] in this scenario
    */

    for(int i = 0; i<size;i++){
        if(arr[i]&&arr[i]->getCarId() == id){
            return arr[i]->getBatteryType();
        }
    }

    //indicating id was not found or found with a pointer which is invalid
    return BatteryType::NA_INVALID;

}

EvCar** ObjectsOnHeap(EvCar** arr, int size){

    for(int i = 0;i<size;i++){
        int id = 0;
        std::string name = "";
        float price = 0.0f;
        BatteryType type = BatteryType::NA_INVALID;
        int choice = -1;

        //inputs are taken from userin above variables


        std::cin>>id;
        std::cin>>name;
        std::cin>>price;
        std::cin>>choice;


        arr[i] = new EvCar(id,name,price,(BatteryType)choice);
    }
    return arr;

}

void deallocateHeap (EvCar** arr, int size){
    for(int i = 0;i<size;i++){
        delete arr[i];
    }
}
int main(){ 

    EvCar* arr[2];
    ObjectsOnHeap(arr,2);
    AveragePrice(arr,2);
    FindBatteryTypeById(arr,2,101);
    deallocateHeap(arr,2);

}