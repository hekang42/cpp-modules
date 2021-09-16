#include "Fixed.hpp"

Fixed::Fixed()
{
	this->i = 0;
}
Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &ref) // copy constructor
{
	*this = ref;
}

Fixed::Fixed(float n)
{
	this->i = (int)roundf(n * (1 << fractional_bits));
}

Fixed::Fixed(int n)
{
	this->i = n << this->fractional_bits;
}

Fixed &Fixed::operator=(const Fixed &ref) // assignation operator overload.

{
	this->i = ref.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &b)
{
	return (this->i > b.getRawBits());
}

bool Fixed::operator>=(const Fixed &b)
{
	return (this->i >= b.getRawBits());
}

bool Fixed::operator<(const Fixed &b)
{
	return (this->i < b.getRawBits());
}

bool Fixed::operator<=(const Fixed &b)
{
	return (this->i <= b.getRawBits());
}

bool Fixed::operator==(const Fixed &b)
{
	return (this->i == b.getRawBits());
}

bool Fixed::operator!=(const Fixed &b)
{
	return (this->i != b.getRawBits());
}

Fixed& Fixed::operator++()
{
	this->i++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->i--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->i++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->i--;
	return (temp);
}

int Fixed::getRawBits() const
{
	return this->i;
}

Fixed Fixed::operator+(const Fixed &b)
{
	Fixed ret;

	ret.setRawBits(this->i + b.i);
	return (ret);
}

Fixed Fixed::operator-(const Fixed &b)
{
	Fixed ret;

	ret.setRawBits(this->i - b.i);
	return (ret);
}

Fixed Fixed::operator*(const Fixed &b)
{
	Fixed ret;

	ret.setRawBits(this->i * b.i / (1 << this->fractional_bits));
	return (ret);
}

Fixed Fixed::operator/(const Fixed &b)
{
	Fixed ret;

	ret.setRawBits(this->i / b.i * (1 << this->fractional_bits));
	return (ret);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	else
		return (b);
}

void Fixed::setRawBits(int const raw)
{
	this->i = raw;
}

int Fixed::toInt() const
{
	return (this->i >> 8);
}

float Fixed::toFloat() const
{
	return ((float)this->i / (1 << 8));
}


