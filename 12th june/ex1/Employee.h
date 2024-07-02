#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"
#include <ostream>

class Employee
{
private:
    /* data */
    int employeeId;
    std::string employeeName;
    unsigned int employeeAge;
    float employeeSalary;
    Department employeeDepartment;
public:
    Employee(int id, std::string name, unsigned int age,float salary, Department department);

    Employee(int id, std::string name, unsigned int age, Department department);

    Employee();

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    unsigned int operator+(const Employee& rhs);

    void operator++();

    void operator++(int);

    ~Employee();

    int getEmployeeId() const { return employeeId; }
    void setEmployeeId(int employeeId_) { employeeId = employeeId_; }

    unsigned int getEmployeeAge() const { return employeeAge; }
    void setEmployeeAge(unsigned int employeeAge_) { employeeAge = employeeAge_; }

};

#endif // EMPLOYEE_H
