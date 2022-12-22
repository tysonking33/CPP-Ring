#include "HumanB.h"

HumanB::HumanB(std::string new_name){
    name = new_name;
}
void HumanB::setWeapon(Weapon *new_weapon){
    weapon_thing = new_weapon;
}

HumanB::attack(){
    std::cout << name << " attacks with their " << weapon_thing->getType();
}
HumanB::~HumanB(){}