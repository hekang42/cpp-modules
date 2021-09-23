#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}
Ice::Ice(Ice const &other) : AMateria(other)
{

}
Ice &Ice::operator=(Ice const &other)
{
	this->AMateria::operator=(other);
	return (*this);
}
Ice::~Ice()
{
}
AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}