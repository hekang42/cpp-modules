#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


void test_form(Form &form, Bureaucrat &hekang, Bureaucrat &wrong)
{
	wrong.signForm(form);
	hekang.excuteForm(form);
	hekang.signForm(form);
	wrong.excuteForm(form);
	hekang.excuteForm(form);
}
int main()
{
	Bureaucrat hekang("hekang", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;

	Form *form;

	// form = intern.makeForm("ShrubberyCreationForm", "target");
	// test_form(*form, hekang, wrong);
	// delete form;
	// form = intern.makeForm("RobotomyRequestForm", "target");
	// test_form(*form, hekang, wrong);
	// delete form;
	// form = intern.makeForm("PresidentialPardonForm", "target");
	// test_form(*form, hekang, wrong);
	// delete form;

	try
	{
		form = intern.makeForm("robotomy request", "target");
		test_form(*form, hekang, wrong);
		delete form;

		form = intern.makeForm("WrongName", "target");
		test_form(*form, hekang, wrong);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
