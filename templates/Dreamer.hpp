#ifndef DREAMER_HPP
#define DREAMER_HPP

#include "Dreamer.h"

template <typename T>
Dreamer<T>::Dreamer(T _salary, std::string _name) noexcept:
    salary(_salary), name(_name) {}

template <typename T>
T Dreamer<T>::getSalary() const noexcept
{
    return salary;
}

template <typename T>
void Dreamer<T>::getName() const noexcept
{
    std::cout << "Dreamer's name is " << name << std::endl;
}

#endif