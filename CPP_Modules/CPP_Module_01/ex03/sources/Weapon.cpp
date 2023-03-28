#include "../includes/Weapon.h"

Weapon::Weapon(){
	type = "default";
	std::cout << "Default Weapon operator called" << std::endl;
}

Weapon::Weapon(const Weapon& w): type(w.type){
	std::cout << "copy Weapon operator called" << std::endl;
}
Weapon &Weapon::operator=(const Weapon &w){
	this->type = w.type;
	if (this == &w)
        return *this;
	std::cout << "assignment Weapon operator called" << std::endl;
	return *this;
}

Weapon::Weapon(std::string weaponName){
	type = weaponName;
}

const std::string &Weapon::getType(){
	return this->type;
}

void Weapon::setType(std::string newType){
	type = newType;
}

Weapon::~Weapon(){
	std::cout << "Default weapon destructor called" << std::endl;
}
