#include "Brain.hpp"
	
Brain::Brain(void)
{
	const std::string ideas[] = {
		"🥱",
		"🥵",
		"😢",
		"😱",
		"🥶"
	};

	std::cout << "Constructor Brain:";
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}
Brain::~Brain(void)
{
	std::cout << "Destructor Brain:";
	for (int i = 0; i < 100; ++i)
		std::cout << " " << this->ideas[i];
	std::cout << std::endl;
}
Brain::Brain(const Brain &other)
{
	for (int i = 0;i < 100; i++)
		this->ideas[i] = other.ideas[i];
}
Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0;i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
std::string const &Brain::getIdea(int index) const
{
	return this->ideas[index];
}