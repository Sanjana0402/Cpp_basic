#include <iostream>

class Base
{
private:
    
public:
    
    void Demo() {
        std::cout << "Demo from Base class called\n";
    }
    
    Base() {}
  
    ~Base() {}
};

class Derived : public Base
{
private:
    
public:
    Derived() {}

    void Demo() {
        std::cout << "Demo from Derived class called\n";
    }

    ~Derived() {}
};

int main() {
    //A
    Base b1;
    b1.Demo(); //Base Demo

    //B

    Base* b2 = new Base();
    b2->Demo(); //Base Demo

    delete b2;

    //C

    Derived d1;
    d1.Demo(); //Derived Demo

    //D

    Derived* d2 = new Derived();
    d2->Demo(); //Derived Demo;


    //E

    Base* ptr = new Derived(); //upcasting

    ptr->Demo(); //Base Demo
}