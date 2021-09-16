#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->Hitpoints = 10;
	this->Energypoints = 10;
	this->Attackdamage = 0;
	std::cout << "ClapTrap " << this->Name << " appeard" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " disappeard" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << this->Name << " attacks " << target
	<< ", causing " << this->Attackdamage << " points of damage! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	std::cout << this->Name << " take Damages " << amount << std::endl;
	std::cout << this->Name << "'s Hitpoints is " << this->Hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;
	std::cout << this->Name << " is repaired " << amount << std::endl;
	std::cout << this->Name << "'s Hitpoints is " << this->Hitpoints << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

