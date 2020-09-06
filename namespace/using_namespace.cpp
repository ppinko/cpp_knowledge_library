/*
Example showing usage of namespaces.

If more than one namespace declares same name variables or 
functions and we don't specify explicitly which to use, then 
an error is thrown - "reference to name is ambiguous".
This mechanism helps from unexpected overwriting.

C++ does a great job at preventing random function change.
*/

#include <iostream>

namespace first
{
    char name[] = "first";
} 

namespace second
{
    char name[] = "second";
} 

using namespace first;
using namespace second;

int main()
{
    std::cout << first::name << " " << second::name << std::endl;
    // std::cout << name << std::endl; /* reference to name is ambiguous */
    
    char name[] = "global";
    std::cout << name << std::endl; // out: "global"
    return 0;
}