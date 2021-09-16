#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie( void );
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	std::string name;
};
Zombie* zombieHorde( int N, std::string name );
#endif

