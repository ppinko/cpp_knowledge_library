// https://www.pluralsight.com/blog/software-development/how-to-measure-execution-time-intervals-in-c--

#include <chrono> // for high_resolution_clock
#include <iostream>
#include <vector>

int main(){

    // Record start time
    auto start = std::chrono::high_resolution_clock::now();

    // Portion of code to be timed
    std::vector<int32_t> v {};
    int32_t i = 0;
    while (i < 1000000){
        v.push_back(i * 10);
        ++i;
    }

    // Record end time
    auto finish = std::chrono::high_resolution_clock::now();

    // using instance of duration class to get elapsed time
    std::chrono::duration<double> elapsed = finish - start;
    // invoke count method to get the elapsed time measured in seconds
    std::cout << "Elapsed time: " << elapsed.count() << " s\n"; // Elapsed time: 0.0223904 s

    return 0;
}