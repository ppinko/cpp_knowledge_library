#include <iostream>

// C++ program to show that we can access a global variable 
// using scope resolution operator :: when there is a local  
// variable with same name  

int count = 0;

class X
{
public:
      static int count;
};

int X::count = 10; // define static data member

int main(void) {
    int count = 0;
    ::count = 1;  // set global count to 1
    count = 2;    // set local count to 2
  
    int X = 0;  // hides class type X
    std::cout << X::count << std::endl; // use static member of class X
    return 0;
}