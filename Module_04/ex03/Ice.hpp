#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice();
		Ice(const Ice& oldIce);
		Ice& operator = (const Ice& oldobj);
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif