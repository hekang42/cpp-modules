#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	
	Form formA("A", 1, 1);
	Form formB("B", 1, 1);
	b.signForm(formA);
	b.decGrade();
	b.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;
}
