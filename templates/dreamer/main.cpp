#include "Dreamer.h"

int main(int argc, char const *argv[])
{
    Dreamer<double> developer(100.25, "ninja");
    sayHello(); // function defined in .cpp
    developer.getName();
    std::cout << "Salary of developer ìs " << developer.getSalary() << "$$$" << std::endl;

    Dreamer<int> misia(50.5, "ninja");
    misia.getName();
    std::cout << "Salary of misia ìs " << misia.getSalary() << "$$$" << std::endl;
    return 0;
}
