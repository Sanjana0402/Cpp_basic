#include <iostream>

class A
{
private:
    /* data */
public:
    A(/* args */) {}
    ~A() {}

    void fn_1(){
        std::cout<<"fn_1 in A class\n";
    }
    virtual void fn_2(){
        std::cout<<"fn_2 in A class\n";
    }
};

class B : public A
{
private:
    /* data */
public:                                                     
    B(/* args */) {}
    ~B() {}
     void fn_1(){
        std::cout<<"fn_1 in B class\n";
    }
     void fn_2(){
        std::cout<<"fn_2 virtual function in B class\n";
    }
};

int main(){
    A* obj = new B(); //upcasting.....parent pointer attached to child object
    // obj.fn_1();
    obj->fn_2();
}

// if a member function has been called on an object, perform these steps

