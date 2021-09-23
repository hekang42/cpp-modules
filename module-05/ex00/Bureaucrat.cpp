#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}
Bureaucrat::~Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}
std::string Bureaucrat::getName() const
{
	return this->_name;
}
int Bureaucrat::getGrade() const
{
	return this->_grade;
}
void Bureaucrat::incGrade()
{
	--this->_grade;
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw GradeTooHighException();
	}
}
void Bureaucrat::decGrade()
{
	++this->_grade;
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw GradeTooLowException();
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}