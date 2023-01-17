#include "Weapon.h"

Weapon::Weapon(std::string weaponName){
	type = weaponName;
}

const std::string &Weapon::getType(){
	return this->type;
}

void Weapon::setType(std::string newType){
	type = newType;
}
