/*
https://en.cppreference.com/w/cpp/types/integer

*/

#include <iostream>
#include <memory>
#include <climits>

int main(){
    
    int8_t a1 {1};
    std::cout << "Sizeof int8_t type : " << sizeof(a1) << " byte(s)" << std::endl;    // 1 byte, 8 bits
    std::cout << "max/min of int8_t is " << INT8_MAX << " " << INT8_MIN << std::endl;

    int16_t b1 {1};
    std::cout << "Sizeof int16_t type : " << sizeof(b1) << " byte(s)" << std::endl;    // 2 bytes, 16 bits
    std::cout << "max/min of int8_t is " << INT16_MAX << " " << INT16_MIN << std::endl;

    int32_t c1 {1};
    std::cout << "Sizeof int32_t type : " << sizeof(c1) << " byte(s)" << std::endl;    // 4 bytes, 32 bits
    std::cout << "max/min of int8_t is " << INT32_MAX << " " << INT32_MIN << std::endl;

    int64_t d1 {1};
    std::cout << "Sizeof int64_t type : " << sizeof(c1) << " byte(s)" << std::endl;    // 4 bytes, 32 bits
    std::cout << "max/min of int8_t is " << INT64_MAX << " " << INT64_MIN << std::endl;

    return 0;
}