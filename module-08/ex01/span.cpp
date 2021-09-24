#include "span.hpp"

Span::Span(Span const &other)
{
	_size = other.size();
	_values = other.getValue();
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_size = other.size();
		_values = other.getValue();
	}
	return *this;
}

Span::Span(unsigned int size)
{
	this->_size = size;
}

void Span::addNumber(int n)
{
	int size = std::distance(_values.begin(), _values.end());
	if (size == _size)
		throw FullyStored();
	_values.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	int size = std::distance(begin, end);
	if (size > static_cast<int>(_size))
		throw FullyStored();
	_values.insert(_values.end(), begin, end);
}

int Span::size() const
{
	return _size;
}
std::vector<int> Span::getValue() const
{
	return _values;
}
int Span::shortestSpan()
{
	int size = std::distance(_values.begin(), _values.end());
	if (size < 2)
		throw NotenoughNumbers();
	std::vector<int> copy = _values;

	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator prev = copy.begin();
	std::vector<int>::iterator next = ++copy.begin();
	int minSpan = *next - *prev;

	while (next != copy.end())
	{
		if (*next - *prev < minSpan)
			minSpan = *next - *prev;
		prev = next++;
	}
	return minSpan;
}
int Span::longestSpan()
{
	int size = std::distance(_values.begin(), _values.end());
	if (size < 2)
		throw NotenoughNumbers();
	std::vector<int> copy = _values;
	
	std::sort(copy.begin(), copy.end());
	return (copy.back() - copy.front());
}
