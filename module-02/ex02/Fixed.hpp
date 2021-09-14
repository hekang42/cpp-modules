#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
	int i;
	// const int raw = 8;
public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed &operator=(const Fixed &ref);
	bool &operator>(const Fixed &ref);
	Fixed &operator<(const Fixed &ref);
	Fixed &operator>=(const Fixed &ref);
	Fixed &operator<=(const Fixed &ref);
	Fixed &operator==(const Fixed &ref);
	Fixed &operator!=(const Fixed &ref);
	Fixed &operator+(const Fixed &ref);
	Fixed &operator-(const Fixed &ref);
	Fixed &operator*(const Fixed &ref);
	Fixed &operator/(const Fixed &ref);
	Fixed static min(const Fixed &ref1, const Fixed &ref2);
	Fixed static max(const Fixed &ref1, const Fixed &ref2);
	int getRawBits() const;
	void setRawBits(int const raw);

};
#endif