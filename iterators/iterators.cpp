#include <iostream>
#include <string>
#include <iterator>

int main(){

    std::string str1 ("Pawel");
    std::cout << sizeof(str1) << std::endl;

    std::string::iterator it = str1.begin();
    std::cout << "Sizeof an iterator = " << sizeof(it) << std::endl;
    std::cout << "Initial it = " << *it << std::endl; // 'P'

    auto it2 = std::next(it);
    std::cout << "It2 created using next = " << *it2 << std::endl; // 'a'

    std::advance(it, 3);
    std::cout << "Initial it after advancing by 3 = " << *it << std::endl; // 'e'

    auto it3 = std::prev(it);
    std::cout << "It3 created using prev = " << *it3 << std::endl; // 'w'

    auto cit = str1.cbegin();
    while(cit != str1.cend()){
        std::cout << *cit << std::endl;
        // *cit = 'X'; // would produce an error, can't change value of element pointed by const iter
        cit++;
    }

    return 0;
}