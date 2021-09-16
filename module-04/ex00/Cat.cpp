#include "Cat.hpp"
	
Cat::Cat(void) : Animal()
{
	this->type = "Cat";
}
Cat::~Cat(void)
{
	
}
Cat::Cat(const Cat &other)
{
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::setType(std::string type)
{
	this->type = type;
}
void Cat::makeSound(void)
{
	std::cout << "Mew Mew" <<std::endl;
}
std::string Cat::getType(void)
{
	return (this->type);
}