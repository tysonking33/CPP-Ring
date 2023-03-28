#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"
#include <string>
#include <iostream>

class HumanB{
public:
	HumanB();
	HumanB(const HumanB& srcB);
	HumanB &operator=(const HumanB &srcB);
	HumanB(std::string BName);
	Weapon *WAPon;
	std::string name;
	void setWeapon(Weapon& newWAP);
	void attack();
	~HumanB();

};

#endif
