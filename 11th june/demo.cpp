#include <iostream>

enum Rank{
    FIRST,
    SECOND
};

//void Magic(Rank& r1)
void Magic(int r1){
    std::cout << r1+10 <<"\n";
}

int main(){
    Rank r1 = FIRST;
    Magic(r1);
}