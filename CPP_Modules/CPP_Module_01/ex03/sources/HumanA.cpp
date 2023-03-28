#include "../includes/HumanA.h"

HumanA::HumanA(){
	this->WAPon = nullptr;
	this->name = "default";
	std::cout << "Default humanA operator called" << std::endl;
}

HumanA::HumanA(const HumanA& srcA):WAPon(srcA.WAPon), name(srcA.name){
	std::cout << "Copy humanA operator called" << std::endl;
}

HumanA &HumanA::operator=(const HumanA &srcA){
	this->WAPon = srcA.WAPon;
	this->name = srcA.name;
	std::cout << "human assignment operator called" << std::endl;
	return *this;
}

HumanA::HumanA(std::string AName, Weapon& newWAP){
	this->WAPon = &newWAP;
	this->name = AName;
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << WAPon->getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "Default humanA destructor called" << std::endl;
}