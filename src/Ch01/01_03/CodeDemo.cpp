// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Write you name: " << std::flush; // use std::flush to have inline input
    std::cin >> str;
    std::cout << "Hello " + str << std::endl;
 

    std::cout << std::endl << std::endl;
    return (0);
}
