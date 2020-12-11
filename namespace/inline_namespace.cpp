#include <iostream>

namespace AllInts
{
inline namespace SpecialInts
{
    int testInt {7};
} // end of SpecialInts namespace
} // end of AllInts namespace

int main(int argc, char const *argv[])
{
    std::cout << AllInts::testInt << std::endl;
    return 0;
}
