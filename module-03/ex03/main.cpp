#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap  DiamondTrap("hekang");

	DiamondTrap.attack("sushin");
	DiamondTrap.takeDamage(5);
	DiamondTrap.beRepaired(5);
	DiamondTrap.whoAmI();

	return (0);
}