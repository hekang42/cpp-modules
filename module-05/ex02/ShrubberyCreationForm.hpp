#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm() : Form("", "hekang", 42, 42) {};
	
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();

	void action(Bureaucrat const &executor) const;
};

#define TREE_ASCII_ART "\
    oxoxoo    ooxoo\n\
  ooxoxo oo  oxoxooo\n\
 oooo xxoxoo ooo ooox\n\
 oxo o oxoxo  xoxxoxo\n\
  oxo xooxoooo o ooo\n\
    ooo\\oo\\  /o/o\n\
        \\  \\/ /\n\
         |   /\n\
         |  |\n\
         | D|\n\
         |  |\n\
         |  |\n\
  ______/____\\____\n\
";

#endif