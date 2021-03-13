#ifndef DREAMER_H
#define DREAMER_H

#include <iostream>
#include <string>

template <typename T>
class Dreamer final 
{
private:
    T salary;
    std::string name;
public:
    Dreamer(T _salary, std::string _name) noexcept;
    Dreamer() = delete;
    T getSalary() const noexcept;
    void getName() const noexcept;
};

void sayHello();

#include "Dreamer.hpp"

#endif