#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	void setType(std::string type);
	void makeSound() const;
};

#endif

