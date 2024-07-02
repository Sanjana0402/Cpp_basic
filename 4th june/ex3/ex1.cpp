#include <iostream>

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
    
};

int main(){
    const Data d1(10,'A');
    // d1.setRating('B');
    // d1.m_value=99;
}

