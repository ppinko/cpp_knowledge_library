#include <cstdint>
#include <iostream>

template <typename T>
void print(T &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void constPrint(T const &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void rvaluePrint(T &&value)
{
    std::cout << value << std::endl;
}

template <typename T>
void rvalueTest(T &&value)
{
    T t = value;
    t *= 2;
    std::cout << value << " vs " << t << std::endl;
}

int main(int argc, char const *argv[])
{
int i{ 3U };
float const fc { 5.5 };

    // Type Deduction from Lvalue Reference Function Parameters
    print(i);
    print(fc);
    // print(7.5); // error: argument to a & parameter must be an lvalue
    constPrint(i);
    constPrint(fc);
    constPrint(7.5);

    // Reference Collapsing and Rvalue Reference Parameters
    // Type Deduction from Rvalue Reference Function Parameters
    rvaluePrint(i); // argument is an lvalue; template parameter T is int&
    rvaluePrint(fc); // argument is an lvalue; template parameter T is const float&
    rvaluePrint(7.5);

    // Writing Template Functions with Rvalue Reference Parameters
    rvalueTest(i);      // out: 6 vs 6 
    // rvalueTest(fc);  // error: assignment of read-only variable
    rvalueTest(7.5);    // out: 7.5 vs 15

    return 0;
}
