#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource default constructor called"<<std::endl;
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout<<"MateriaSource Destructor called"<<std::endl;
    for(int i =0; i < 4; i++)
    {
        if (Materias[i] != NULL)
        {
            delete Materias[i];
            Materias[i] = 0;
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout<<"MateriaSource Copy constructor called"<<std::endl;
    for(int i = 0; i < 4; i++)
            Materias[i] = NULL;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this != &rhs)
    {
        for(int i = 0; i < 4; i++)
        {
            if (Materias[i] != NULL)
            {
                delete Materias[i];
                Materias[i] = NULL;
            }
        }
        for(int i = 0; i < 4; i++)
        {
            if (rhs.Materias[i] != NULL)
                Materias[i] = rhs.Materias[i]->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (Materias[i] == NULL)
        {
            Materias[i] = m;
            return ;
        }
    }
    std::cout<<"[learnMateria] -> no free space"<<std::endl;
}

 AMateria* MateriaSource::createMateria(std::string const & type)
 {
    for(int i = 0; i < 4; i++)
    {
        if (Materias[i] != NULL && type.compare(Materias[i]->getType()) == 0)
            return (Materias[i]->clone());
    }
    return (0);
 }