#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iterator>
#include <iostream>

class NonExistException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Non Exist";
		}
};

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator iter;
	iter = std::find(a.begin(), a.end(), b);
	if (iter == a.end())
		throw NonExistException();
	return iter;
};


#endif