#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice();
		Ice(const Ice& oldIce);
		Ice& operator = (const Ice& oldobj);
		Ice* clone() const;  // virtual AMateria* clone() const = 0;
		void use(ICharacter& target);
};

#endif