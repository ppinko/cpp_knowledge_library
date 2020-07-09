#include <iostream>

int main(){
    
    int *p = nullptr;

    /* It's possible to get address of nullptr */
    std::cout << p << std::endl; // out: 0

    /* Dereferencing a null pointer cause a segmentation error. */
    // std::cout << *p << std::endl; // segmentation error
    
    delete p;
    
    return 0;
}