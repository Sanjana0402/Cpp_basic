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
    

    //ptr is a constant pointer to a non-const modifyable integer
     int * const ptr = &n1;

    *ptr = 11;// WILL  WORK

     ptr = &n2;//this is NOT fine 


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