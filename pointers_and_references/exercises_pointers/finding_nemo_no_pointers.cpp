/*
https://edabit.com/challenge/vzwwjNAYgEeLG2inD
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

std::string findNemo(std::string sentence) {
    std::string ans {"I found Nemo at "};
    int pos = sentence.find("Nemo ");
    if (pos == std::string::npos)
        return "I can't find Nemo :(";
    int word_count {1};
    for (int i {0}; i < pos; i++){
        if (sentence.at(i) == ' ')
            word_count++;
    }
    ans += std::to_string(word_count) + '!';
	return ans;
}

int main(){
    std::cout << std::boolalpha;
    std::string nemo = "I am finding Nemo !";
    std::cout << findNemo(nemo) << " = I found Nemo at 4!" << std::endl;
    return 0;
}