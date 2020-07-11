// RETURNING SEVERAL ARGUMENTS

#include <iostream>
#include <tuple>
#include <string>
#include <utility>

// Class template std::tuple is a fixed-size collection of heterogeneous values. 
// It is a generalization of std::pair.

std::tuple<int, float, std::string> tuple_test(){
    int a = 7;
    float b = 1.25;
    std::string str {"c++"};
    return std::make_tuple(a, b, str);  // std::make_tuple
}

// std::pair is a class template that provides a way to store two heterogeneous 
// objects as a single unit. A pair is a specific case of a std::tuple with two elements.

std::pair<int, float> pair_test(){
    int a = 10;
    float b = 4.5;
    return std::make_pair(a, b);    // std::make_pair
}

int main(){

    // Returning elements from tuple
    auto tuple_results = tuple_test();
    std::cout << "Returning elements from tuple" << std::endl;
    std::cout << std::get<0>(tuple_results) << std::endl;   // std::get
    std::cout << std::get<1>(tuple_results) << std::endl;
    std::cout << std::get<2>(tuple_results) << std::endl;

    // Tuple unpacking with std::tie
    int a; float b; std::string str;
    std::tie(a, b, str) = tuple_test();     // std::tie
    std::cout << "Tuple unpacking with std::tie" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << str << std::endl;

    // Returning elements from pair
    auto pair_results = pair_test();
    std::cout << "Returning elements from pair" << std::endl;
    std::cout << "First element: " << pair_results.first
        << ", Second element: " << pair_results.second << std::endl;    

	std::tuple<int, float, std::string> tuple_test {1, 0.5, "test"};
	std::cout << std::get<1>(tuple_test) << std::endl;	

    return 0;
}