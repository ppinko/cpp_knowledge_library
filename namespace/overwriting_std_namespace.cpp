#include <iostream>
#include <string>

using namespace std;

string to_string(int n)
{
    std::string str {static_cast<char>(n)};
    str.push_back('!');
    return str;
}

int main(){
    int x = 2;
    cout << to_string(x) << endl; // call of overloaded 'to string(int&) is ambigious
    return 0;
}