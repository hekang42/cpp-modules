#include "Animal.hpp"
	
Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Born " << this->type << std::endl;
}
Animal::~Animal(void)
{
	std::cout << "Bye " << this->type << std::endl;
}
Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Born " << this->type << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}