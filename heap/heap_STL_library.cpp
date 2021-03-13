#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>

void display_vector(std::vector<int> v){
    auto it = v.begin();
    std::cout << "[ ";
    for (it; it != v.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "]\n"; 
}

int main(){
    std::boolalpha;
    
    std::vector<int> v1 {1, 5, 3, 7, 9};
    // is_heap - complexity linear
    display_vector(v1);
    std::cout << "Using is_heap to check = " << std::is_heap(v1.begin(), v1.end()) << "\n";


    // make_heap - complexity -> at most 3*std::distance(first, last) comparisons. 
    std::make_heap(v1.begin(), v1.end());
    std::cout << "Vector v1 after using make heap : \n"; 
    display_vector(v1);

    // making min heap using priority queue and greater<int> comparison operator
    std::priority_queue <int, std::vector<int>, std::greater<int> > pq;
    pq.push(7);
    pq.push(5);
    pq.push(3);
    pq.push(4);
    pq.push(1);
    std::cout << "Priority queue pq : \n"; 
    while (pq.empty() == false) 
    { 
        std::cout << pq.top() << " "; 
        pq.pop(); 
    } 
    std::cout << std::endl;
    std::cout << pq.top() << std::endl;
    std::cout << pq.empty() << std::endl;
    return 0;
}