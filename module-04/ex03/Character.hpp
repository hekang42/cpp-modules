#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[4];

public:
	Character();
	Character(std::string const &name);
	Character(Character const &other);
	Character &operator=(Character const &other);
	~Character();
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif