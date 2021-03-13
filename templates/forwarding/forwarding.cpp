#include <utility>
#include <iostream>

// template that takes a callable and two parameters
// and calls the given callable with the parameters ''flipped''
// flip1 is an incomplete implementation: top-level const and references are lost
template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2)
{
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
    f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int &v2) // note v2 is a reference
{
    std::cout << v1 << " " << ++v2 << std::endl;
}

void g(int &&i, int& j)
{
    std::cout << i << " " << j << std::endl;
}

int main(int argc, char const *argv[])
{
    int i{ 7 };
    f(42, i);    // f changes its argument i
    std::cout << "i = " << i << std::endl;  // out: i = 8

    int j{ 0 };
    flip1(f, j, 42); // f called through flip1 leaves j unchanged
    std::cout << "j = " << j << std::endl;  // out: j = 0

    flip2(f, j, 42);
    std::cout << "j = " << j << std::endl;  // out: j = 1

    // flip2(g, i, 42); // error: can't initialize int&& from an lvalue

    flip(f, j, 42);
    std::cout << "j = " << j << std::endl;  // out: j = 2

    return 0;
}
