#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


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

	ShrubberyCreationForm form1("target");
	RobotomyRequestForm form2("target");
	PresidentialPardonForm form3("target");
	test_form(form1, hekang, wrong);
	test_form(form2, hekang, wrong);
	test_form(form3, hekang, wrong);
	return 0;
}
