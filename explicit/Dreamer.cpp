#include "Dreamer.h"

void sayHello()
{
    std::cout << "Hello!!!" << std::endl;
}

void tellSalary(Dreamer const& dreamer)
{
    std::cout << dreamer.getSalary() << std::endl;
}