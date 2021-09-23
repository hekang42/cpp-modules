#include "AMateria.hpp"

AMateria::AMateria()
{
}
AMateria::AMateria(AMateria const &other)
{
	this->_type = other._type;
}
AMateria &AMateria::operator=(AMateria const &other)
{
	this->_type = other._type;
	return (*this);
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}