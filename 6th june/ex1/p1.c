#include<stdio.h>

struct Data
{
    /* data */
    short id;
    int value;
    char grade;
};

int main(){
    struct Data d1 = {111,9867,'A'};
    printf("%ld\n",sizeof(d1));
}