#include "Cat.hpp"
	
Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
}
Cat::~Cat(void)
{
	delete (this->brain);
}
Cat::Cat(const Cat &other)
{
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	return (*this);
}

void Cat::setType(std::string type)
{
	this->type = type;
}
void Cat::makeSound(void) const
{
	std::cout << "Mew Mew" <<std::endl;
}