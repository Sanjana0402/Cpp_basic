#include <iostream>

class Base
{
private:
    
public:
    
    Base() {}
  
    virtual ~Base() {
        std::cout << "Base destructor called\n";
    }
};

class Derived : public Base
{
private:
    
public:
    Derived() {}

    ~Derived() {
        std::cout << "Derived destructor called\n";
    }
};

int main() {
    // //A
    // Base b1; //Base destructor called

    // //B

    // Base* b2 = new Base();

    // delete b2; //Base destructor called

    // //C

    // Derived d1; //Derived destructor called

    // //D

    // Derived* d2 = new Derived();
    // delete d2; //Derived destructor called

    // //E

    // Base* ptr = new Derived(); //upcasting (non virtual destructor)

    // delete ptr; //Undefined behaviour


    //F

    Base* ptr2 = new Derived(); //upcasting (virtual destructor in base class)

    delete ptr2; //both destructors are called (Derived first, then Base class)

}