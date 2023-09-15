#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Default constructor called"<<std::endl;
}

// Brain::Brain(std::string type)
// {
//      std::cout<<"Brain Default parameter constructor called"<<std::endl;
// }

Brain::~Brain()
{
    std::cout<<"Brain Destructor called"<<std::endl;
}

Brain::Brain(const Brain& oldobj)
{
     std::cout<<"Brain Copy constructor called"<<std::endl;
}

Brain& Brain::operator=(const Brain& oldobj)
{
    std::cout<<"Brain Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    for (size_t i = 0; i < 100 ; ++i)
	{
		this->_ideas[i] = oldobj._ideas[i];
	}
    return (*this);
}