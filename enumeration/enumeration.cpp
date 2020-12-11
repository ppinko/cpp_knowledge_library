#include <iostream>
#include <cstdint>

enum class languages : uint8_t
{
    cpp = 1,
    python = 2,
    mysql = 3,
    bash = 4
};

int main(int argc, char const *argv[])
{
    languages firstLang {languages::cpp};
    switch (firstLang)
    {
        case languages::cpp:
            std::cout << "You know cpp" << std::endl;
            break;
        case languages::python:
            std::cout << "You know python" << std::endl;
            break; 
        case languages::mysql:
            std::cout << "You know mysql" << std::endl;
            break; 
        case languages::bash:
            std::cout << "You know bash" << std::endl;
            break; 
    }
    return 0;
}
