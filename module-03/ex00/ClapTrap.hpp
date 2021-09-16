#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
class ClapTrap
{
protected:
	std::string Name;
	int Hitpoints;
	int	Energypoints;
	int Attackdamage;
public:
	ClapTrap();
	ClapTrap(std::string Name);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);


	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif