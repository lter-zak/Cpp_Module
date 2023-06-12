#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_dark_sec();
		void set_first_name(std::string);
		void set_last_name(std::string);
		void set_nickname(std::string);
		void set_phone_number(std::string);
		void set_dark_sec(std::string);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string dark_sec;
};

#endif