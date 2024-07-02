/*
    objective : understand when a destructor is called 
    in various kinds of programs    
*/

#include<iostream>

class Parent
{
private:
    /* data */
    std::string _lastName;
public:
    Parent(std::string ln) {
        this->_lastName = ln;
    }
    // virtual ~Parent() // to move to the child class and base class destructor should be marked virtual not doing this might create prblm 
    ~Parent() {
        std :: cout << "Destructor for "<<_lastName<<" called\n";
    }
};

class Child : public Parent
{
private:
    /* data */
    std::string _firstName;
public:
    Child(std::string ln,std::string fn):Parent(ln) {
        this->_firstName = fn;
    }
    ~Child() {
        std :: cout << "Destructor for "<<_firstName<<" is destroyed\n";
    }
};

int main(){
    // Parent p1("XYZ");

    // Parent* p2 = new Parent("MNO");
    // delete p2;

    // Child c1("XYZ","ABC");
    Parent* c2 = new Child("MNO","PQR");

    delete c2;
}