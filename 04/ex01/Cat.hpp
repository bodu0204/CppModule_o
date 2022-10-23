#ifndef CAT_HPP
#define CAT_HPP 

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Animal.hpp"

class Cat :public Animal
{
private:
    Brain *b;
public:
    virtual void makeSound() const;
    Brain const *get_brainp() const;
    Cat();
    Cat(Cat const &);
    Cat const &operator=(Cat const &);
    ~Cat();
};

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

Brain const *Cat::get_brainp() const
{
    return b;
}

Cat const &Cat::operator=(Cat const &c)
{
    static_cast<Animal>(*this) = static_cast<Animal>(c);
    delete this->b;
    this->b = new Brain(*(c.b));
    return (*this);
}

Cat::Cat(Cat const &c)
{
    std::cout << "Cat constructor was called." << std::endl;
    static_cast<Animal>(*this) = static_cast<Animal>(c);
    this->b = new Brain(*(c.b));
}

Cat::Cat()
{
    std::cout << "Cat constructor was called." << std::endl;
    this->type = "Cat";
    this->b = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called." << std::endl;
    delete this->b;
}

#endif