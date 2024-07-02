/*
    use of const keyword for non-pointer, primitive data types!
    eg : int,char,float
*/

#include <iostream>

int main(){

    //n1 is a "constant int" value set in 10
     int n1 = 10;
     int n2 = 20;

    //n1=99; WILL NOT WORK

    // char const c1 ='A';------
    //                         |-----> SAME (BOTH ARE CONSTANTS)
    // const char c2 ='B';------
    

    //ptr is a pointer which points to a constant integer
    const int * ptr = &n1;

    // *ptr = 11; WILL NOT WORK

    ptr = &n2;//this is fine 


}

/*

    n1
    [  10   ]
    0x100H
                         ptr
                    [    0x987H   ]

    n2
    [  20   ]
    0x987H

*/