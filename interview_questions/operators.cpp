#include <iostream>

int main(){
    
    int a = 5; // assignment operator

    /* The part at the left of the =operator is known as an lvalue (left value)
    and the right as rvalue (right value). Lvalue must always be a variable
    whereas the right side can be a constant, a variable, the result of an
    operation or any combination of them. */
    
    int b;
    a = 2 + (b=5); // weird structure
    std::cout << "a = " << a << " & b == " << b << std::endl;

    int c, d , e;
    c = d = e = 6; // possible to define more than one variable at the time
    std::cout << "c = " << c << " & d == " << d << " & e == " << e << std::endl;

    return 0;
}