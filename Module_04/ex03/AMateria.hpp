#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>	
#include <string.h>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	
	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria& oldobj);
        AMateria& operator = (const AMateria& oldobj);

		std::string const& getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif