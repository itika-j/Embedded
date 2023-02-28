#include <iostream>
#include <string>

int main(){
    //Output value
    int age {20};
    std:: cout<< "Age: " << age << std::endl;

    //error message
    std::cerr << "Error message" << std::endl;

    //log message
    std::clog << "log message" << std:: endl;

    //enter data
    int age1;
    std::string name;

    std::cout << "enter name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    //std::cin >> name >> age1;


    //full name
    std::getline(std::cin,name);
    std::cin >> age1;

    std::cout <<"Hello " << name <<std::endl << "Age " <<age1;
    return 0;
}