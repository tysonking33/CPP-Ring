#ifndef WEAPON_H
#define WEAPON_H

#include <string.h>
#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string weaponName);
		const std::string &getType();
		void setType(std::string newType);
};

#endif
