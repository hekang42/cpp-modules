#include "FragTrap.hpp"

int main(void)
{
	FragTrap  fragtrap("hekang");

	fragtrap.attack("sushin");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();

	return (0);
}