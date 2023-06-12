//#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void Add();

	private:
		int index;
		Contact contact[8];
};

#endif