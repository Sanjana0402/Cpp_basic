#include <iostream>

class Base
{
private:
    
public:
    
    virtual void Display() {
        std::cout << "Display from Base class called\n";
    }
    
    Base() {}
  
    ~Base() {}
};

class Derived : public Base
{
private:
    
public:
    Derived() {}

    void Display() {
        std::cout << "Display from Derived class called\n";
    }

    ~Derived() {}
};

int main() {
    //A
    Base b1;
    b1.Display(); //Base Display

    //B

    Base* b2 = new Base();
    b2->Display(); //Base Display

    delete b2;

    //C

    Derived d1;
    d1.Display(); //Derived Display

    //D

    Derived* d2 = new Derived();
    d2->Display(); //Derived Display;


    //E

    Base* ptr = new Derived(); //upcasting

    ptr->Display(); //Derived Display
}