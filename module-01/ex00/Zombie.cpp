#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

void Zombie::announce()
{
	std::cout << name
	<< " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name
	<< " GooooooddddbyyyyeeE..." << std::endl;
}
