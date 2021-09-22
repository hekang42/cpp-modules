#include "Dog.hpp"
	
Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
}
Dog::~Dog(void)
{
	delete (this->brain);
}
Dog::Dog(const Dog &other)
{
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	return (*this);
}
void Dog::setType(std::string type)
{
	this->type = type;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark Bark" <<std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}