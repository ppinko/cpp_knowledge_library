/*
https://edabit.com/challenge/GJT6RyivEHh3onNq4
*/

#include <iostream>
#include <vector>
#include <iomanip>

bool simonSays(std::vector<int> *arr1, std::vector<int> *arr2) {
    int arr1_size = arr1->size();
    int arr2_size = arr2->size();
    if (arr1_size != arr2_size)
        return false;
    for (int i{0}; i < arr1_size - 1; i++){
        if (arr1->at(i) != arr2->at(i+1))
            return false;
    }
	return true;
}

int main(){
    std::cout << std::boolalpha;
    std::vector<int> *vec1 = new std::vector<int>{1, 2, 3, 4, 5};
    std::vector<int> *vec2 = new std::vector<int>{0, 1, 2, 3, 4};
    std::cout << simonSays(vec1, vec2) << std::endl;
    delete vec1;
    delete vec2;
    return 0;
}