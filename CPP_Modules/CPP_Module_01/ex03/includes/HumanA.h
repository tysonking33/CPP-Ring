#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"
#include <string>
#include <iostream>

class HumanA{
public:
	HumanA();
	HumanA(const HumanA& srcA);
	HumanA &operator=(const HumanA &srcA);

	HumanA(std::string AName, Weapon& newWAP);

	Weapon *WAPon;
	std::string name;
	void attack();
	~HumanA();
};

#endif
