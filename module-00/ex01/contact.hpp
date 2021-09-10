#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
	struct contact_data
	{
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	};
	struct contact_data data[8];
	int index;
public:
	Contact();
	void Add();
	void Search();
	void Exit();
};

#endif