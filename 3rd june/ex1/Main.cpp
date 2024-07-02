#include "Car.h"

int main(){
    //stack -----> to access data fastest this is used.......it is fixed in size.
    Car c1("Dzire",4,"DZ111",Category::SEDAN);
    Car c4("Thar",4,"TP44P",Category::MPG);
    Car c5("Verna",5,"DK11P",Category::SEDAN);

    //heap ---> not as fast as stack.......where quantity of data increases heap is the best choice.
    Car* c2=new Car("City",5,"XYJ4Z",Category::SEDAN); //dynamically allocated
    //new mem in cpp is equal to malloc and to deallocate mem delete is the command.......these are not the functions these are the operators therefore there is no bracket.....

    Car* c3=new Car("Nexon",5,"OD055",Category::SUV);

    //arr is an array of 2 pointers of Car type
    Car* arr[2] {c2,c3};

    Car stack_arr[3] = {c1,c4,c5};


    delete c2;
    delete c3;
    
}


/*
    TESLA AUTO PILOT CRASH
*/