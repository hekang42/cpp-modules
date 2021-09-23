#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "Form.hpp"
class Intern
{
private:
	/* data */
public:
	Intern() {}
	Intern(Intern const &) {}
	Intern &operator=(Intern const &)
	{
		return *this;
	}
	~Intern() {}
	Form *makeForm(std::string const &formName, std::string const &target);
	class NotKnownFormException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Intern can't create NotKnownForm");
		}
	};
};




#endif