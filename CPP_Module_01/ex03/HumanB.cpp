#include "HumanB.h"

HumanB::HumanB(std::string BName){
	this->name = BName;
}

void HumanB::setWeapon(Weapon& newWAP){
	this->WAPon = &newWAP;
}

void HumanB::attack(){
	std::cout << name << " attacks with their " << WAPon->getType() << std::endl;
}
