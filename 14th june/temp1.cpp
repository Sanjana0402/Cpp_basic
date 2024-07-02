#include<iostream>
 
template<typename T, typename X>
class Data{
    private:
    int _id;
    T value;
    X error_margin;
    public:
    Data(int id, T val,X err){
    this->_id = id;
    this->value = val;
    this->error_margin = err;
    }
    ~Data(){}
};
 
int main(){
    Data<int,float>d1(111,99,45.0f);
}