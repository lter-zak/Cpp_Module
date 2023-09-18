#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure();
		Cure(const Cure& oldCure);
		Cure& operator=(const Cure& oldobj);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif