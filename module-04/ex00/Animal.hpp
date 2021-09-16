#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class Animal
{
protected:
	std::string type;

public:
	Animal();
	~Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	
	std::string getType();
	void makeSound();
};

#endif

