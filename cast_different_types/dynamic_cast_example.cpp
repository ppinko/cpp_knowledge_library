#include <iostream>
#include <string>
#include <vector>

class Animal{
    private:
        std::string name;
    public:
        Animal() = default;
        Animal(const Animal& other) = default;
        virtual ~Animal() = default;

        virtual void set_name(std::string name_val)
        {
            name = name_val;
        }

        virtual void introduce()
        {
            std::cout << "I'm an animal and my name is " << name << std::endl;
        }
};

class Dog: public Animal{
    private:
        std::string name;
    public:
        Dog() = default;
        Dog(const Dog& other) = default;
        virtual ~Dog() = default;

        virtual void set_name(std::string name_val)
        {
            name = name_val;
        }

        virtual void introduce()
        {
            std::cout << "I'm a dog and my name is " << name << std::endl;
        }
};

int main(){
    Animal* ptr_1 = new Animal();
    Animal* ptr_2 = new Dog();

    ptr_1->set_name("Burek");
    ptr_2->set_name("Ziuta");

    std::vector<Animal*> v {ptr_1, ptr_2};

    for (const auto &i : v)
    {
        i->introduce();
    }

    delete ptr_1;
    delete ptr_2;

    Dog d;
    d.set_name("Reks");
    d.introduce();

    Animal* new_ptr;
    new_ptr = dynamic_cast<Animal*>(&d);
    new_ptr->introduce();

    return 0;
}