#include "Form.hpp"

Form::Form(std::string const &name, int to_excute_grade, int to_signed_grade) : _name(name), _to_sign_grade(to_signed_grade), _to_excute_grade(to_excute_grade)
{
	this->_is_signed = false;
}

Form::~Form()
{
}
Form::Form(const Form &other) : _name(other.getName()), _to_sign_grade(other.getSignGrade()), _to_excute_grade(other.getExcuteGrade())
{
	this->_is_signed = other._is_signed;
}
Form &Form::operator=(const Form &other)
{
	this->_is_signed = other._is_signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}
bool Form::getSigned() const
{
	return (this->_is_signed);
}
int Form::getSignGrade() const
{
	return (this->_to_sign_grade);
}
int Form::getExcuteGrade() const
{
	return (this->_to_excute_grade);
}
void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_to_excute_grade)
		throw Form::GradeTooLowException();
	this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "< " << form.getName() << " sign : " << form.getSignGrade() << ", exec : " << form.getExcuteGrade();
	if (form.getSigned())
		os << ", signed";
	else
		os << ", not signed";
	os << " >";
	return (os);
}