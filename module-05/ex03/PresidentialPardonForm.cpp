#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, "PresidentialPardonForm", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->Form::operator=(other);
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
void PresidentialPardonForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "The " << this->getTarget() << " has been pardoned by " << executor.getName() << "." << std::endl;
}
Form *PresidentialPardonForm::create(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

