#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap  scavtrap("hekang");

	scavtrap.attack("sushin");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();

	return (0);
}