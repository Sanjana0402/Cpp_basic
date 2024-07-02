#include<iostream>
#include "Employee.h"


class Employee
{
private:
    /* data */
    int _id;
    float _salary;
    unsigned _age;
    float _experience;

public:
    Employee(int id, float salary, unsigned age,float experience) {
        this ->_id = id;
        this ->_salary = salary;
        this ->_age = age;
        this ->_experience = experience;

    }
  
    ~Employee()
    {
        std::cout << "Object Destroyed\n";
    }

    float operator+(Employee e2){
        // return current object's salary + e2's salary
        return this->_salary + e2._salary;
    }

    float operator*(Employee e2){
        // return current object's salary * e2's salary
        return this->_salary * e2._salary;
    }
};

int main(){
    Employee e1(220278,20000.f,24,11.f);
    Employee e3(1234278,40000.f,34,15.f);
    Employee* e2 = new Employee(220298,23000.f,23,14.f);

    std::cout<<"Adding e1 and e3 : "<<e1 + e3<<"\n";
    std::cout<<"Adding e1 and e2 : "<<e1 + (*e2)<<"\n"; //e1 added with address of e2, Employee + Employee

    delete e2;

    
}



