#ifndef HUMANB_H
# define HUMANB_H
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(void);
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	std::string name;
	Weapon weapon;

	void setWeapon(Weapon weapon);
	void attack(void);
};
# endif