//#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();

	private:
		int index;
		Contact contact[8];
};

#endif