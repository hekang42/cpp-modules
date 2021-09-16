#include <iostream>

int main(void)
{
	std::string		str;
	str = "HI THIS IS BRAIN";
	std::string 	*stringPTR;
	stringPTR = &str;
	std::string 	&stringREF = str;
	std::cout 
	<< "STR Address : " << &str << " " << str << std::endl
	<< "PTR Address : " << stringPTR << " " << *stringPTR << std::endl
	<< "REF Address : " << &stringREF << " " << stringREF << std::endl;
	return (0);
}