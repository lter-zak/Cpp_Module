#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		~Cure();
		Cure(const Cure& oldobj);
		Cure& operator = (constCure& oldobj);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif