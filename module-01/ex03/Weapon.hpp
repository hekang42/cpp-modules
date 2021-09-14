#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{
public:
	Weapon(void);
	std::string type;
	Weapon(std::string name);

	void setType(std::string Newname);
	std::string &getType();
};
# endif