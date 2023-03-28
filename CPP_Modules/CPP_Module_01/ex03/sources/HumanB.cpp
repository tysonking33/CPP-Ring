#include "../includes/HumanB.h"

HumanB::HumanB(){
	this->name = "defaultB";
	std::cout << "Default humanB operator called" << std::endl;
}

HumanB::HumanB(const HumanB& srcB): name(srcB.name){
	if (srcB.WAPon)
		this->WAPon = srcB.WAPon;
	std::cout << "HumanB copy operator called" << std::endl;
}


HumanB &HumanB::operator=(const HumanB &srcB){
	this->name = srcB.name;
	if (srcB.WAPon)
		this->WAPon = srcB.WAPon;
	std::cout << "humanB assignment operator called" << std::endl;
	return *this;
}

HumanB::HumanB(std::string BName){
	this->name = BName;
}

void HumanB::setWeapon(Weapon& newWAP){
	this->WAPon = &newWAP;
}

void HumanB::attack(){
	std::cout << name << " attacks with their " << WAPon->getType() << std::endl;
}

HumanB::~HumanB(){
	std::cout << "Default humanB destructor called" << std::endl;
}