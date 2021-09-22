#include "WrongCat.hpp"
	
WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
}
WrongCat::~WrongCat(void)
{
	
}
WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::setType(std::string type)
{
	this->type = type;
}
void WrongCat::makeSound(void) const
{
	std::cout << "Mew Bark Mew Bark" <<std::endl;
}