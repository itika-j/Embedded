#include<iostream>

int main(){

    bool red_light{true};
    bool green_light{false};
    bool yellow_light;

    if(red_light){
        std::cout << "Stop" <<std::endl;
    }

    if(yellow_light){
        std::cout << "Prepare" << std::endl;
    }
    if(green_light){
        std::cout << "Go!!" << std::endl;
    }

    //print 0-1
    std::cout <<" red_light -> "<<red_light <<std::endl;
    std::cout <<" yellow_light -> "<<yellow_light <<std::endl;
    std::cout <<" green_light -> "<<green_light <<std::endl;

    std::cout <<std::boolalpha; //allow prints true false

    //print true false
    std::cout <<" red_light -> "<<red_light <<std::endl;
    std::cout <<" yellow_light -> "<<yellow_light <<std::endl;
    std::cout <<" green_light -> "<<green_light <<std::endl;


    return 0;
}