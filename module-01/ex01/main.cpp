#include "Zombie.hpp"

const std::string NAME[] = 
{
	"jinbe",
	"hekang",
	"ghong",
	"sushin"
};

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(5, "hakang");
	delete[] zombies;
	return (0);
}