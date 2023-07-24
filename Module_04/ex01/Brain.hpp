#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& oldobj);
        Brain& operator = (const Brain& oldobj);

    private:
        std::string _ideas[100];
};

#endif
