#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{

}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->Name << " disappeard" << std::endl;

}
DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->Name = Name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage = FragTrap::Attackdamage;
	std::cout << "DiamondTrap " << this->Name << " appeard" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target) 
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->Name <<
	" clapTrap name is " << this->ClapTrap::Name << std::endl;
}
