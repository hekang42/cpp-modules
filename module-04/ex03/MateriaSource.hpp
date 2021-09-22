#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	Amateria *_material[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource &operator=(MateriaSource const &other);
	Amateria *getMateria(int index) const;
	~MateriaSource();

	void learnMateria(Amateria*) = 0;
	Amateria* createMateria(std::string const & type) = 0;
};

#endif