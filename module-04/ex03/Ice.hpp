#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
class Ice : public Amateria
{
private:

public:
	Ice();
	Ice(Ice const &other);
	Ice &operator=(Ice const &other);
	~Ice();
	Amateria *clone() const;
	void use(ICharacter &target);
};



#endif