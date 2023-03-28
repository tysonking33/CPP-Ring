#ifndef WEAPON_H
#define WEAPON_H

#include <string.h>
#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
	Weapon();
	Weapon(const Weapon& w);
	Weapon &operator=(const Weapon &w);
		Weapon(std::string weaponName);
		const std::string &getType();
		void setType(std::string newType);
	~Weapon();
};

#endif
