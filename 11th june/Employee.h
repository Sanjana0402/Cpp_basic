#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"
#include<iostream>


class Employee
{
private:
    /* data */
    unsigned int employeeId;
    std::string employeeName;
    unsigned short employeeAge;
    float employeeSalary;
    Department employeeDepartment;
public:
    Employee(unsigned int id, std::string name, unsigned short age,float salary, Department department);

    Employee(unsigned int id, std::string name, unsigned short age, Department department);

    Employee();

    ~Employee();
};

#endif // EMPLOYEE_H
