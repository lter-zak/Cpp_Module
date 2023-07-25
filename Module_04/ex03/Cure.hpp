#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(std::string const & type);
		~Cure();
		Cure(const Cure& oldobj);
		Cure& operator = (constCure& oldobj);
	
};

#endif