#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>    
#include <iomanip>

int main(){

    int* ptr_1 = new int(10);
    int* ptr_2 = new int(20);
    std::vector<int*> v {ptr_1, ptr_2};

    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int*>(std::cout, " - "));

    delete ptr_1;
    delete ptr_2;

    return 0;
}