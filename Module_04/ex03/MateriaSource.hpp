#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& rhs);

        void learnMateria(AMateria*) = 0;
		AMateria* createMateria(std::string const & type) = 0;
    private:
		AMateria* Materias[4];
};

#endif