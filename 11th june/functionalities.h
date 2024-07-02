#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"

void CreateObjects(Employee** employees, const unsigned int size);

void FetchEmployeeById(const Employee** employees, const unsigned int size, const unsigned int id);

void CountSeniorEmployees(const Employee** employees,const unsigned int size);

#endif // FUNCTIONALITIES_H
