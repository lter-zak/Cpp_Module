#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure();
		Cure(const Cure& oldCure);
		Cure& operator=(const Cure& oldobj);
		Cure* clone() const;  // virtual AMateria* clone() const = 0;
		void use(ICharacter& target);
};

#endif