#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("hekang");

	claptrap.attack("sushin");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);

	return (0);
}