#include <iostream>
#include <time.h>
#include <cstdlib>

int main(){
    clock_t start, stop;
    clock_t start2, stop2;
    int n = 10000000;
    
    
    // int table [n];
    // start2 = clock();
    // for (int i {0}; i < n; i++){
    //     table[i] = i;
    //     table[i] -= 5;
    // }
    // stop2 = clock();
    // double time1 = (double)(stop2 - start2) / CLOCKS_PER_SEC;
    // std::cout << "Time for normal array = " << time1 << std::endl;

    
    int* ptr_table = new int[n];
    start = clock();
    for (int i {0}; i < n; i++){
        *ptr_table = i;
        *ptr_table -= 5;
        ptr_table++;
    }
    ptr_table = ptr_table - n;
    stop = clock();
    double time2 = (double)(stop - start) / CLOCKS_PER_SEC;
    std::cout << "Time for array on the heap = " << time2 << std::endl;

    delete [] ptr_table;
    std::cout << "THE END" << std::endl;
    return 0;
}