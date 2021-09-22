#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H
#include <iostream>
#include "Amateria.hpp"
class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(Amateria*) = 0;
	virtual Amateria* createMateria(std::string const & type) = 0;
};
#endif