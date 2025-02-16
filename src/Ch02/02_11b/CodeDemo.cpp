// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    double weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;

    float weight1 = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight1 << std::endl;
    std::cout << "Integer part   : " << (int) weight1 << std::endl;
    std::cout << "Fractional part: " << (int)((weight1 - (int)weight1) * 10000) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
