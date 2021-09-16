#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string Name;
public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(std::string Name);
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap &operator=(DiamondTrap const &other);
	void whoAmI(void);
	void attack(const std::string &target);
};

#endif