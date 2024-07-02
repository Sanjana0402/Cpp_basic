#include "Employee.h"

Employee::Employee(unsigned int id, std::string name, unsigned short age, float salary, Department department)
{
    this->employeeId = id;
    this->employeeName = name;
    this->employeeAge = age;
    this->employeeSalary = salary;
    this->employeeDepartment = department;
}

Employee::Employee(unsigned int id, std::string name, unsigned short age, Department department)
{
    this->employeeId = id;
    this->employeeName = name;
    this->employeeAge = age;
    this->employeeSalary = 0.f;
    this->employeeDepartment = department;
}

Employee::Employee()
{
    this->employeeId = 0;
    this->employeeName = "";
    this->employeeAge = 0;
    this->employeeSalary=0.f;
    this->employeeDepartment = Department::IT;
}

Employee::~Employee()
{

    std::cout<<"Employee with Id : "<<this->employeeId<<" is destroyed\n";

}


