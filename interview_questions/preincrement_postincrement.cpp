#include <iostream>

int main(){
    int a1 = 0;
    int a2 = 0;
    
    int b1 = --a1 + 5; // decrement before calculating b1
    std::cout << "a1 = " << a1 << " & b1 = " << b1 << std::endl;
    
    int b2 = a2-- + 5; // decrement after calculating b1
    std::cout << "a2 = " << a2 << " & b2 = " << b2 << std::endl;

    return 0;
}