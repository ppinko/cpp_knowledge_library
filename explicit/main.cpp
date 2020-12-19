#include "Dreamer.h"

int main(int argc, char const *argv[])
{
    Dreamer developer(100);
    tellSalary(developer);
    // tellSalary(50); // error: cannot use implicit conversion to create object 
                    // of class Dreamer with 'explicit' constructor
    tellSalary(Dreamer(50)); // OK

    return 0;
}
