#include <iostream>

int main(){
    //int value assign

    //discard floats a = 1
    int a; 
    //discard floats b = 2 - data loss
    int b(2);
    //gives error with 3.3 - no data loss
    int c{};

    std::cout << " a = " << a << " b = " << b <<" c = "<<c;


    //float
}