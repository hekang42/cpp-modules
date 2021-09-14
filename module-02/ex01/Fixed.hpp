#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
	int i;
	static const int fractional_bits= 8;
public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed(const int n);
	Fixed(const float n);
	Fixed &operator=(const Fixed &ref);
	// ostream &operator<<(char c, const Fixed &ref);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

};
std::ostream &operator<<(std::ostream &out, const Fixed &ref);
#endif