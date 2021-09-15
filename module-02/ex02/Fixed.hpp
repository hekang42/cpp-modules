#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

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
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed& operator++(); // pre-increment ++a
	Fixed& operator--(); // pre-decrement --a
	Fixed operator++(int); // post-increment a++
	Fixed operator--(int); // post-decrement a--
	bool operator>(const Fixed &b);
	bool operator<(const Fixed &b);
	bool operator>=(const Fixed &b);
	bool operator<=(const Fixed &b);
	bool operator==(const Fixed &b);
	bool operator!=(const Fixed &b);
	Fixed operator+(const Fixed &b);
	Fixed operator-(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &ref);

#endif