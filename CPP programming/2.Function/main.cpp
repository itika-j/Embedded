#include <iostream>

//this is a multiply function
int multiply(int num1,int num2){
    int result = num1*num2;
    return result;
}

int main(){
    int num1 {3},num2 = 6;

    //this is a numtiply statement
    int res = num1*num2;

    std::cout << "result is " << res << std::endl;
    std::cout << "result is " << multiply(7,11) << std::endl;
    
}