#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("hekang", 2);

	try
	{
		b.incGrade();
		std::cout << b << std::endl;
		b.incGrade();
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat bb("hekang", 149);
	try
	{
		bb.decGrade();
		std::cout << bb << std::endl;
		bb.decGrade();
		std::cout << bb << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
