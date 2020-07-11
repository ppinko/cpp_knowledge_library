#include <iostream>
#include <sstream>

template <typename T>
T max_val(T first, T second){
    return (first > second) ? first : second;
}


int main(int argc, char* argv[]){
    if (argc != 3){
        std::cerr << "Wrong number of parameters" << std::endl;
        return 1;
    }    

    std::istringstream iss1 {argv[1]};
    std::istringstream iss2 {argv[2]};
    int a, b;
    iss1 >> a;
    iss2 >> b;

    std::cout << max_val<int>(a, b) << std::endl;

    return 0;
}