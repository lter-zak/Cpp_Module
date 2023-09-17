#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource
{
    public:
        void learnMateria(AMateria*) = 0;
		AMateria* createMateria(std::string const & type) = 0;
    private:
};

#endif