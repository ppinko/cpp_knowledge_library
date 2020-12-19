#ifndef DREAMER_H
#define DREAMER_H

#include <iostream>
#include <string>

class Dreamer final 
{
private:
    int salary;
public:
    
    Dreamer(int _salary) noexcept: salary(_salary) {}

    Dreamer() = delete;
    
    int getSalary() const noexcept
    {
        return salary;
    }   

};

void sayHello();

void tellSalary(Dreamer const& dreamer);

#endif