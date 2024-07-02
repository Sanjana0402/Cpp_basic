#include <iostream>
// CALL BY VALUE

void Magic(int n1){
    std::cout << "N1 address in magic is : " << &n1 <<"\n";
    n1 = 99;
    std::cout << "N1 value after modification in magic is : " << n1 <<"\n";
}


int main(){
    int n1 = 11;
    std::cout << "N1 address in main is : " << &n1 <<"\n";
    std::cout << "N1 before calling magic in main is : " << n1 <<"\n";

    Magic(n1);

    std::cout << "N1 value after calling magic in main is : " << n1 <<"\n";
}