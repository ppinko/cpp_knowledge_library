/*
https://en.cppreference.com/w/cpp/language/types

THEORY

Boolean type - true or false, 1 byte(s), 8 bits

Data models:
32 bit systems: ILP32 or 4/4/4 (int, long, and pointer are 32-bit); 
64 bit systems: LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit) 

Int type - 4 byte(s), 32 bits
Long type - 8 byte(s), 64 bits
Pointer type - 8 byte(s), 64 bits
*/

#include <iostream>
#include <memory>

int main(){
    
    bool b1 {true};
    std::cout << "Sizeof bool type : " << sizeof(b1) << " byte(s)" << std::endl;    // 1 byte, 8 bits

    char c1 {'y'};
    std::cout << "Sizeof char type : " << sizeof(c1) << " byte(s)" << std::endl;    // 1 byte, 8 bits

    int i1 {1};
    std::cout << "Sizeof int type : " << sizeof(i1) << " byte(s)" << std::endl;     // 4 bytes, 32 bits

    long l1 {1000};
    std::cout << "Sizeof long type : " << sizeof(l1) << " byte(s)" << std::endl;     // 8 bytes, 64 bits

    long long ll1 {1000};
    std::cout << "Sizeof long long type : " << sizeof(ll1) << " byte(s)" << std::endl;  // 8 bytes, 64 bits

    float f1 {10.5};
    std::cout << "Sizeof float type : " << sizeof(l1) << " byte(s)" << std::endl;     // 8 bytes, 64 bits

    double d1 {10.5};
    std::cout << "Sizeof double type : " << sizeof(l1) << " byte(s)" << std::endl;     // 8 bytes, 64 bits

    long double ld1 {10.5};
    std::cout << "Sizeof long double type : " << sizeof(ld1) << " byte(s)" << std::endl;     // 8 bytes, 64 bits

    int *ptr = new int;
    *ptr = 10;
    std::cout << "Sizeof pointer type : " << sizeof(ptr) << " byte(s)" << std::endl;     // 8 bytes, 64 bits 

    auto ptr_unique = std::make_unique<int>(10);
    std::cout << "Sizeof unique_ptr type : " << sizeof(ptr_unique) << " byte(s)" << std::endl;     // 8 bytes, 64 bits   

    auto ptr_shared = std::make_shared<int>(10);
    std::cout << "Sizeof shared_ptr type : " << sizeof(ptr_shared) << " byte(s)" << std::endl;     // 16 bytes, 128 bits 

    std::weak_ptr<int> ptr_weak {ptr_shared};
    std::cout << "Sizeof weak_ptr type : " << sizeof(ptr_weak) << " byte(s)" << std::endl;     // 16 bytes, 128 bits 


    return 0;
}