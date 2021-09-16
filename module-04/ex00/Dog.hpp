#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	void setType(std::string type);
	const std::string getType(void);
	void makeSound();
};

#endif