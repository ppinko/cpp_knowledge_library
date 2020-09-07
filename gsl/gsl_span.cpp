/*
great post - https://stackoverflow.com/questions/45723819/what-is-a-span-and-when-should-i-use-one

source - https://www.modernescpp.com/index.php/c-core-guideline-the-guidelines-support-library

A view is never an owner. In the case of a gsl::span<T> it represents a non-owning 
range of continguous memory. This can be an array, a pointer with a size, or a 
std::vector. The same holds for gsl::string_span<T> or a zero terminated C strings: 
gsl::(cw)zstring.The main reason for having a gsl::span<T> is that a plain array 
will be decayed to a pointer if passed to a function; therefore the size is lost.

gsl::span<T> automatically deduces the size of the plain array or the std::vector. 
If you use a pointer, you have to provide the size.
*/


#include <iostream>
#include <gsl/gsl>

void process_ints(const gsl::span<const int> s){
    /* using range for loop with gsl::span provides bound checking */
    for (const auto &i : s)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    
    std::cout << "Standard solution using pointer and length" << std::endl;
    int j = sizeof(a) / sizeof(a[0]);
    for (size_t i = 0; i < j; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Solution using gsl::span<T>" << std::endl;
    process_ints(a);

    return 0;
}