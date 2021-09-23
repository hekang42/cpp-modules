#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);

	Bureaucrat(const std::string &name, const int grade);
	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
#endif