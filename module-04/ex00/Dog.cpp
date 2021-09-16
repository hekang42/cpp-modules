#include "Dog.hpp"
	
Dog::Dog(void) : Animal()
{
	this->type = "Dog";
}
Dog::~Dog(void)
{
	
}
Dog::Dog(const Dog &other)
{
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}
void Dog::setType(std::string type)
{
	this->type = type;
}

void Dog::makeSound(void)
{
	std::cout << "Bark Bark" <<std::endl;
}
const std::string Dog::getType(void)
{
	return (this->type);
}