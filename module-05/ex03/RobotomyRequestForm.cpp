#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, "RobotomyRequestForm", 72, 45)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->Form::operator=(other);
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
void RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "du du du du ";
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " is a robot!\n";
	else
		std::cout << this->getTarget() << " making robot is fail!\n";
}

Form *RobotomyRequestForm::create(std::string const &target)
{
	return new RobotomyRequestForm(target);
}