#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " disappeard" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->Name = Name;
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	std::cout << "ScavTrap " << this->Name << " appeard" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap ";
	this->ClapTrap::attack(target);
}