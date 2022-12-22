#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA{
    private:
        std::string name;
        Weapon *weapon_thing;
    public:
        HumanA(std::string new_name, Weapon *new_weapon);
        attack();
        ~HumanA();
}

#endif