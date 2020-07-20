/*
A pseudo-random number generator generates values that can be guessed based on previously generated values.
In other words: it is deterministic. Do not use a pseudo-random number generator in situations where a true
random number is required.
*/

#include <iostream>
#include <random>
int main()
{
    std::default_random_engine pseudo_random_generator;
    std::uniform_int_distribution<int> int_distribution(0, 9);
    int actual_distribution[10] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i = 0; i < 10000; i++) 
    {
        int result = int_distribution(pseudo_random_generator);
        actual_distribution[result]++;
    }
    for(int i = 0; i <= 9; i++) 
    {
        std::cout << actual_distribution[i] << " ";
    }
    // 993 1007 998 958 1001 1049 989 963 1026 1016 - running several times the same code yields the same results

    return 0;
}

/*
This code creates a random number generator, and a distribution that generates integers in the range [0,9] with
equal likelihood. It then counts how many times each result was generated.
The template parameter of std::uniform_int_distribution<T> specifies the type of integer that should be
generated. Use std::uniform_real_distribution<T> to generate floats or doubles.
*/