#include "HumanA.h"

HumanA::HumanA(std::string new_name, Weapon *new_weapon){
    name = new_name;
    weapon_thing = new_weapon;
}
HumanA::attack(){
    std::cout << name << " attacks with their " << weapon_thing->getType();
}
HumanA::~HumanA(){}