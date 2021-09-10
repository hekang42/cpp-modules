#include "contact.hpp"

Contact::Contact()
{
	index = 0;
}

void Contact::Add()
{
	if (index == 8)
	{
		for (int i = 1; i < index; i++)
			data[i-1] = data[i];
		index--;
	}
	std::cout << "first name : ";
	std::cin >> data[index].first_name;
	std::cout << "last name : ";
	std::cin >> data[index].last_name;
	std::cout << "nick name : ";
	std::cin >> data[index].nickname;
	std::cout << "phone number : ";
	std::cin >> data[index].phone_number;
	std::cout << "darkest secret : ";
	std::cin >> data[index].darkest_secret;
	index++;
}

std::string checkwidth(std::string str)
{
	if (str.length() >= 10)
	{
		str.resize(9);
		str += '.';
	}
	return str;
}

void Contact::Search()
{
	int	temp_idx;

	temp_idx = 0;
	std::cout << "|" << std::setw(11) << std::right << "Index|";
	std::cout << std::setw(11) << std::right << "First name|";
	std::cout << std::setw(11) << std::right << "Last name|";
	std::cout << std::setw(11) << std::right << "Nickname|" << std::endl;
	while (temp_idx < index)
	{
		std::cout << "|" << std::setw(10) << std::right << temp_idx + 1 <<"|";
		std::cout << std::setw(10) << std::right << checkwidth(data[temp_idx].first_name) << "|";
		std::cout << std::setw(10) << std::right << checkwidth(data[temp_idx].last_name) << "|";
		std::cout << std::setw(10) << std::right << checkwidth(data[temp_idx].nickname) << "|" << std::endl;
		temp_idx++;
	}
	std::cout << "Search Index : ";
	std::cin >> temp_idx;
	temp_idx--;
	if (temp_idx < index && temp_idx >= 0)
	{
		std::cout << "Fist name      : " << data[temp_idx].first_name << std::endl;
		std::cout << "Last name      : " << data[temp_idx].last_name << std::endl;
		std::cout << "Nickname       : " << data[temp_idx].nickname << std::endl;
		std::cout << "PhoneNumber    : " << data[temp_idx].phone_number << std::endl;
		std::cout << "Darkest Secret : " << data[temp_idx].darkest_secret << std::endl;
	}
}