#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	std::cout << "FragTrap " << this->Name << " appeard" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " disappeard" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->Name = Name;
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout << "FragTrap " << this->Name << " appeard" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap give me a high fives." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap ";
	this->ClapTrap::attack(target);
}