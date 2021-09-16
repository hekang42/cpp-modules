#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);

	void guardGate();
	void attack(const std::string &target);

};
#endif