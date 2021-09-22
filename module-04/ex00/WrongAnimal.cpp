#include "WrongAnimal.hpp"
	
WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "Born " << this->type << std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Bye " << this->type << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Born " << this->type << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Anmimal !!!!!!" <<std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}