#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

void Weapon::setType(std::string Newname)
{
	this->type = Newname;
}

std::string &Weapon::getType(void)
{
	return (this->type);
}