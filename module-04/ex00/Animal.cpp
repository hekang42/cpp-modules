#include "Animal.hpp"
	
Animal::Animal(void)
{
	this->type = "";
}
Animal::~Animal(void)
{
	
}
Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

void Animal::makeSound(void)
{
	std::cout << "... ... ..." <<std::endl;
}