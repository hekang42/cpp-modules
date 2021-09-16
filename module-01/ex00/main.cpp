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
	Zombie stackZombie = Zombie("stackZombie");

	Zombie *heapZombie = newZombie("heapZombie");
	delete heapZombie;

	for (int i = 0; i < 4; i++)
	{
		randomChump(NAME[rand() % 4]);
	}

	
}