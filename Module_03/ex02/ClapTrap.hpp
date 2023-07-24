#ifndef ClapTrap_HPP
#define ClapTrap_HPP

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"
# define MAGENTA "\x1b[35m"

# define BOLD	 "\x1b[1m"

# define BG_RED     "\x1b[41m"
# define BG_GREEN   "\x1b[42m"
# define BG_YELLOW  "\x1b[43m"
# define BG_BLUE    "\x1b[44m"
# define BG_CYAN    "\x1b[46m"
# define BG_RESET   "\x1b[4m"
# define BG_MAGENTA "\x1b[45m"

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();
        ClapTrap(const ClapTrap& other);//Copy constractor
        ClapTrap&   operator=(const ClapTrap &oldObj);//Copy assignment operator

        virtual void	attack(const std::string& target);
        void        	takeDamage(unsigned int amount);
        void        	beRepaired(unsigned int amount);
        void        	printAttributes();
		void 			setAttackDamage(int nb);

    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;   
};

#endif