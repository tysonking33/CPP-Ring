#include "HumanA.h"

HumanA::HumanA(std::string AName, Weapon& newWAP){
	this->WAPon = &newWAP;
	this->name = AName;
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << WAPon->getType() << std::endl;
}
