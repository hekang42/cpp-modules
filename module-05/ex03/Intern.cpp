#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	const std::string formNames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	const std::string formNames2[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	Form *(*forms[3])(std::string const &target) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == formNames[i] || formName == formNames2[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i](target);
		}
	}
	throw Intern::NotKnownFormException();
}
