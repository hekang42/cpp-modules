#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his "
	<< this->weapon.getType() << std::endl;
}