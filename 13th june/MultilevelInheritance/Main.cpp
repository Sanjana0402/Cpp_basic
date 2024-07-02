#include <iostream>
#include "Functionalities.h"
#include "Vehicle.h"

int main() {
    Vehicle* vehicles[2];
    CreateObjects(vehicles, 2);
    Deallocate(vehicles, 2);
}