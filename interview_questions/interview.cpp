#include <iostream>

int globalResult=0; //global variable
int main()
{
    int localVar = 10; //local variable.
    std::cout << "Global variable = " << globalResult << std::endl;
    std::cout << "Local variable = " << localVar << std::endl;
return 0;
}