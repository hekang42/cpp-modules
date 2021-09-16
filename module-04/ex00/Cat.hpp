#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	void setType(std::string type);
	std::string getType(void);
	void makeSound();
};

#endif

