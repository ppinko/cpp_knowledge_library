#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char* argv[]){
    if (argc != 2){
        std::cerr << "Wrong usage, please provide one integer argument" << std::endl;
        return 1;
    }
    
    std::istringstream iss {argv[1]};
    int age;
    if (iss >> age)
        std::cout << "In five years, you will be " << age + 5 << " years old!" << std::endl;
    else {
        std::cerr << "Wrong usage, please provide an integer value" << std::endl;
        return 1;
    }
    
    return 0;
}