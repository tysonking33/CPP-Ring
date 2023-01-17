#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"
#include <string>
#include <iostream>

class HumanB{
public:
	HumanB(std::string BName);
	Weapon *WAPon;
	std::string name;
	void setWeapon(Weapon& newWAP);
	void attack();
};

#endif
