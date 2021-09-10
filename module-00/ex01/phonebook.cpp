#include "contact.hpp"

int	main(void)
{
	std::string	cmd;
	Contact contact;

	std::cout << "WELCOME_TO_AWESOME_PHONE_BOOK" << std::endl;
	while (true)
	{
		std::cout << "COMMAND:";
		std::cin >> cmd;
		if (cmd == "SEARCH")
			contact.Search();
		else if (cmd == "ADD")
			contact.Add();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "you can only use (ADD, SEARCH, EXIT)" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n'); //cin buffer clear \n 만날때까지 무시
		if (std::cin.eof())
			return 0;
	}
}