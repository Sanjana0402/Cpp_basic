/*
    2 operands


    int data = 10;
        std::cout<<data;

        //compiler thinks

            <<operator takes 2 operands
            
            LHS : an object of type ostream
            RHS : integer
*/
#include<iostream>

class Car
{
private:
    /* data */
    int _id;
    std::string _modelName;
    float _price;
public:
    Car(int id,std::string name, float price) {
        this->_id=id;
        this->_modelName=name;
        this->_price = price;
    }
    ~Car() {
        std::cout<<"Car with Id : "<<_id<<" is destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs) {
        os << "_id: " << rhs._id
           << " _modelName: " << rhs._modelName
           << " _price: " << rhs._price;
        return os;
    }

    // friend std::ostream& operator<<(std::ostream& os,const Car& rhs){
    //     os<<"[[["<<rhs._id<<"\t"<<rhs._modelName<<"\t"<<rhs._price<<"]]]";
    //     return os;
    // }

    // compiler stores lhs opperant in "this" if lhs data type matches with the class name....in the current example name is not matching 
    //friend is not a member of the class offically but still can access all the data members in the class

    
};

int main(){
    Car c1(101,"Dzire",90000.f);
    std::cout << c1 <<"\n";
}


// left shift operator allows us to send data which is the rhs to ostream

