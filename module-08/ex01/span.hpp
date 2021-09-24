#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
class Span
{
private:
	std::vector<int> _values;
	int	_size;

public:
	Span(){};
	~Span(){};
	Span(Span const &other);
	Span &operator=(Span const &other);

	Span(unsigned int size);
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan();
	int longestSpan();
	int size() const;
	std::vector<int> getValue() const;

};
class Alreadystored : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Already Stored";
		}
};
class FullyStored : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Fully Stored";
		}
};
class NotenoughNumbers : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Not enough Numbers";
		}
};

#endif