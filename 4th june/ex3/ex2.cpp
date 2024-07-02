#include<iostream>

class Data
{
private:
    /* data */
    int m_value;
    char m_rating;
public:
    Data(int val, char rate) {
        this->m_rating=rate;
        this->m_value=val;
    }

    ~Data() {}

    void setRating(char rating) { 
        this->m_rating = rating; 
    }
    // a mem function marked as const can be invoked/called by a constant object also
    char rating() const { return m_rating; } //the rating function is SAFE 
    
};

int main(){

    //CONST OBJECTS CAN ONLY CALL MEM FUNCTIONS WHICH ARE MARKED const
    const Data d1(101,'A');
    std::cout<<d1.rating()<<"\n";

    Data* d2 = new Data(101,'A');
    std::cout<<d2->rating()<<"\n";

    delete d2;
}