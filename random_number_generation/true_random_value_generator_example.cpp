#include <iostream>
#include <random>
#include <chrono>
int main()
{
    // To generate true random values that can be used for cryptography 
    // std::random_device has to be used as generator.
    std::random_device crypto_random_generator;
    std::uniform_int_distribution<int> int_distribution(0,9);
    int actual_distribution[10] = {0,0,0,0,0,0,0,0,0,0};
    
    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < 10000; i++) 
    {
        int result = int_distribution(crypto_random_generator);
        actual_distribution[result]++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapse = end - start;
    std::cout << "Time elapsed = " << elapse.count() << "s." << std::endl;
    // Time elapsed = 0.0104356s.

    for(int i = 0; i < 10; i++) 
    {
        std::cout << actual_distribution[i] << " ";
    }
    // 1007 996 979 979 1025 1005 1015 974 1063 957
    
    return 0;
}