#include "Employee.h"
#include <string>
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
        os << "employeeId: " << rhs.employeeId
           << " employeeName: " << rhs.employeeName
           << " employeeAge: " << rhs.employeeAge
           << " employeeSalary: " << rhs.employeeSalary
           << " employeeDepartment: " << rhs.employeeDepartment;
        return os;
    }

Employee::Employee(int id, std::string name, unsigned int age, float salary, Department department)
{
    this->employeeId = id;
    this->employeeName = name;
    this->employeeAge = age;
    this->employeeSalary = salary;
    this->employeeDepartment = Department::IT;
}

Employee::Employee(int id, std::string name, unsigned int age, Department department)
{
    this->employeeId = id;
    this->employeeName = name;
    this->employeeAge = age;
    this->employeeSalary = 0.f;
    this->employeeDepartment =  Department::IT;
}

Employee::Employee()
{
    this->employeeId = 0;
    this->employeeName = "";
    this->employeeAge = 0;
    this->employeeSalary=0.f;
    this->employeeDepartment = Department::IT;
}

unsigned int Employee::operator+(const Employee &rhs){
    return this->employeeAge + rhs.employeeAge;
}

void Employee::operator++(){
    ++employeeAge;
}
void Employee::operator++(int){
    employeeAge++;
}





Employee::~Employee()
{

    std::cout<<"Employee with Id : "<<this->employeeId<<" is destroyed\n";

}





