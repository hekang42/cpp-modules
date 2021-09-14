#include "Fixed.hpp"

Fixed::Fixed()
{
	this->i = 0;
	std::cout<< "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout<< "Destuctor called" << std::endl;
}

Fixed::Fixed(const Fixed &ref) // copy constructor
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed Fixed::operator=(const Fixed &ret) // assignation operator overload.
{
	std::cout<< "Assignation operator called" << std::endl;
	Fixed fixed;

	fixed.i = ret.getRawBits();
	return fixed;
}

int Fixed::getRawBits() const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return this->i;
}

void Fixed::setRawBits(int const raw)
{
	(void)raw;
}


