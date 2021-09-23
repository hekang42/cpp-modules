#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	std::string const _name;
	bool	_is_signed;
	int 	const _to_sign_grade;
	int		const _to_excute_grade;
	Form() : _name("hekang"), _to_sign_grade(42), _to_excute_grade(42){};

public:
	Form(std::string const &name, int to_excute_grade, int to_signed_grade);
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	
	std::string getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExcuteGrade() const;
	void beSigned(Bureaucrat const &b);

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Permission denied: Grade too low");
		}
	};
};
std::ostream &operator<<(std::ostream &os, Form const &form);

#endif