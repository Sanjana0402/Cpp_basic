#include<iostream>
#include"functionalities.h"

int main(){
    Employee* employees[3];


    CreateObjects(employees,3);

    try
    {
        FetchEmployeeById((const Employee** )employees,3,101);
    }
    catch(std::invalid_argument& ex)
    {
        std::cerr << ex.what() << "\n";
    }
    catch(IdNotFoundException& ex)
    {
        std::cerr << ex.what() << "\n";
    }
    
}