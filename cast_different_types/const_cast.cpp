#include <iostream>

int main()
{
    const int* ptr = new int(10);
    std::cout << "ptr = " << *ptr << std::endl; // out: 10
    
    // *ptr = 20; // error: pointer to const, read-only value

    // int* p2 = ptr;  // error: a value of type "const int*" cannot be used to initialize an entity of type "int*"
    
    int* p2 = const_cast<int*>(ptr); // constness of 'ptr' was removed
    *p2 = 20;
    std::cout << "ptr = " << *ptr << std::endl; // out: 20

    return 0;
}