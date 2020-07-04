#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>

int main(){
    
    // ISTRINGSTREAM
    std::string info {"Test length of the string - 7"}; 
    std::istringstream iss {info};
    std::string word {};
    // print all the elements from istringstream
    // if istringstream is empty, then it stops looping
    while(iss >> word) std::cout << word << "*";
    std::cout << std::endl;
    
    // OSTRINGSTREAM
	std::ostringstream oss {};
    std::string name {"Pawel"};
	oss << std::setw(10) << std::left << name << std::endl;
    std::cout << oss.str();

    // Using OSTREAM::ITERATOR to princt all elements of STL container
    std::vector<int> v = {1,2,3,4};
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " ! "));
    std::cout << std::endl;

    // Using STL functions for on-the-fly data manipulation
    std::vector<int> v2 = {1,2,3,4,8,16};
    std::boolalpha(std::cout); // print booleans alphabetically
    std::transform(v2.begin(), v2.end(), std::ostream_iterator<bool>(std::cout, " "),
        [](int val) {return (val % 2) == 0;});
    std::cout << std::endl;

    return 0;
}