#include <vector>
#include <iostream>
#include <iomanip>


void print_vec(const std::vector<int>& vec)
{
    for (auto x: vec) {
        std::cout << ' ' << x;
    }
    std::cout << '\n';
}


int main(){
    
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    
    // ACCESSING ELEMENTS

    // v.at() -> if index out of range - compilation error
    std::cout << vec.at(0) << " " << vec.at(vec.size() - 1) << std::endl;   // 1 10

    // v[] -> if index out of range - garbage data !!!
    std::cout << vec[0] << " " << vec[vec.size()] << std::endl;         // 1 41113 - garbage data

    // v.front() and v.back()
    std::cout << vec.front() << " " << vec.back() << std::endl;         // 1 10

    // CAPACITY

    // v.empty() -> return true / false
    std::cout << std::boolalpha;
    std::cout << vec.empty() << std::endl;         // false

    // v.size() -> return number of elements
    std::cout << vec.size() << std::endl;         // 10

    // MODIFIERS

    // v.insert(iter, value) or v.insert(iter, start, end)
    auto it = vec.begin();
    vec.insert(it, 18);
    print_vec(vec);

    it = vec.begin();
    std::vector<int> vec2 {-1, -2 , -3};
    vec.insert(it + 2, vec2.begin(), vec2.end());
    print_vec(vec);

    // v.erase(iter) or v.erase(start, end) -> return iter
    vec.erase(vec.begin());
    print_vec(vec);   
    
    vec.erase(vec.begin()+1, vec.begin()+4);
    print_vec(vec);

    // v.push_back()
    vec.push_back(22);
    print_vec(vec);

    // v.pop_back()
    vec.pop_back();
    print_vec(vec);

    // v.clear() -> return empty vector
    vec.clear();
    std::cout << vec.size() << std::endl;   // 0 

    return 0;
}