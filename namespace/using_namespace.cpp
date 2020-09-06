/*
Example showing usage of namespaces.

If more than one namespace declares same name variables or 
functions and we don't specify explicitly which to use, then 
an error is thrown - "reference to name is ambiguous".
This mechanism helps from unexpected overwriting.

C++ does a great job at preventing random function change.

A couple of namespace's properties:
- Namespace declarations appear only at global scope.
- Namespace declarations can be nested within another namespace.
- Namespace declarations don’t have access specifiers. (Public or private)
- No need to give semicolon after the closing brace of definition of namespace.
- We can split the definition of namespace over several units.
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