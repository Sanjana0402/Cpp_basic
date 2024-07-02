/*
    Objective : Make a class Complex with overload + and - binary operators

    Also overload<<<to print the object's real and imaginary part in a format of ur choice
*/

#include<iostream>

class Complex
{
private:
    /* data */
    float _real;
    float _imaginary;
public:
    Complex(float real, float imaginary) {
        _real = real;
        _imaginary = imaginary;
    }
    ~Complex() {
        std::cout<<"Object destroyed\n";
    }

    Complex operator+(Complex& other){
        float real_tot = this->_real+other._real;
        float imaginary_tot = this->_imaginary+other._imaginary;

        Complex result(real_tot,imaginary_tot);
        return result;
    }
    

    friend std::ostream& operator<<(std::ostream& os,const Complex& rhs) {
        os<<"Real : "<<rhs._real<<"\t"<<"Imaginary : "<<rhs._imaginary<<"j";
        return os;
    }
};

int main(){
    Complex c1(10.5f,34.2f), c2(11.2f,21.6f);

    std::cout<<c1+c2<<"\n";
}