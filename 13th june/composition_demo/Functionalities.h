#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "BankAccount.h"
#include "AccountNotFoundException.h"

void CreateObjects(BankAccount** accounts, const unsigned int size);

void DisplayCardDetails(BankAccount** accounts, unsigned int size, long number);



#endif // FUNCTIONALITIES_H
