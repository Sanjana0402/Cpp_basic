#include "Functionalities.h"


int main() {
    SmartDevice* devices[3];

    CreateObjects(devices, 3);
    Deallocate((const SmartDevice**)devices,3);
}