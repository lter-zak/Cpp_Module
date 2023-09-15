#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& ice);
		~Ice();
		Ice(const Ice& oldobj);
		Ice& operator = (const Ice& oldobj);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif