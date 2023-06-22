#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
	public:
		Weapon();
		~Weapon();
		std::string getType();
		void setType();
	private:
		std::string type;
}

# endif