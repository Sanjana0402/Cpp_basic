#include "functionalities.h"


void CreateObjects(Employee **employees, const unsigned int size)
{
    int id;
    std::string name;
    unsigned int age;
    float salary;
    unsigned int dept;

    for(unsigned int i = 0; i < size;i++){
        std::cin>>id;
        std::cin>>name;
        std::cin>>age;
        std::cin>>salary;
        std::cin>>dept;

        employees[i] = new Employee(id,name,age,salary,(Department) dept);
    }
}

void FetchEmployeeById(const Employee **employees, const unsigned int size, const unsigned int id)
{
    if(size<0){
        std::cerr<<"Size cannot be negative\n";
        return ;
    }

    for(unsigned int i = 0;i<size;i++){
        if(employees[i]->getEmployeeId()  == id){
            std::cout<<*employees[i] <<"\n";
            return;
        }
    }

    throw IdNotFoundException("ID not found\n");
    

}

void CountSeniorEmployees(const Employee **employees, const unsigned int size)
{
      if(size<0){
        throw std::invalid_argument("Size cannot be negative\n");
        return ;
    }

    unsigned int count = 0;

    for(unsigned int i = 0;i<size;i++){
        if(employees[i]->getEmployeeAge() > 50){
            count++;
        }
    }
    std::cout << "Count of Employee with Age over 50 is "<< count <<"\n";
}
