#include<iostream>
 
// void Display(int n){
//     std::cout<< n << "\n";
// }
 
// // same func but diff parameters so time waste of typing it again and again so we use template which will generate func for us so we must write a code to do tht
 
 
// void Display(std::string n){
//     std::cout<< n <<"\n";
// }
 
 
template<typename T>
void Display(T n){
    std::cout<<n<<"\n";
}
 
int main(){
    Display<int>(10);
}