#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(std::string const & type);
		~Ice();
		Ice(const Ice& oldobj);
		Ice& operator = (const Ice& oldobj);
};

#endif