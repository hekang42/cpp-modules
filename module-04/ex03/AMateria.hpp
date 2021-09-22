#ifndef AMATERIA_H
#define AMATERIA_H
#include <iostream>
#include "ICharacter.hpp"
class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(AMateria const &other);
	AMateria &operator=(AMateria const &other);
	virtual ~AMateria();

	AMateria(std::string const & type);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif