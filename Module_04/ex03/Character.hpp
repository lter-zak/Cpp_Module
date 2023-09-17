#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
class Character: public ICharacter
{
	public:
		Character();
		Character(std::string t);
		~Character();
		Character(const Character& t);
        Character& operator=(const Character& t);

		std::string const & getName() const ;
		void equip(AMateria* m) ;
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		AMateria	Materias[4];
		AMateria	leftMaterias[4];
		std::string	_name;

		
}
#endif