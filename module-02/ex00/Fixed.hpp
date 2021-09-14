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
	Fixed operator=(const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);

};
#endif