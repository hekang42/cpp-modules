#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);

	void highFivesGuys(void);
	void attack(const std::string &target);
};
#endif