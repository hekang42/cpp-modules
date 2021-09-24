#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	for (int i=0; i < 6; ++i)
		vec.push_back(i);
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;

	try
	{
		std::cout << *easyfind(vec, 1) << std::endl;
		std::cout << *easyfind(vec, 5) << std::endl;
		std::cout << *easyfind(vec, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
