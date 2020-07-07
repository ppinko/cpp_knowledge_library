#include <iostream>

/* Global variables are defined at the top of the script, before function declarations
/* They can be accessed from other blocks. */

int globalResult=0; //global variable
int main()
{
    int localVar = 10; //local variable.
    std::cout << "Global variable = " << globalResult << std::endl;
    std::cout << "Local variable = " << localVar << std::endl;
return 0;
}