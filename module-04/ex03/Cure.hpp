#ifndef CURE_H
#define CURE_H

#include "Amateria.hpp"
class Cure : public Amateria
{
private:

public:
	Cure();
	Cure(Cure const &other);
	Cure &operator=(Cure const &other);
	~Cure();
	Amateria *clone() const;
	void use(ICharacter &target);
};



#endif