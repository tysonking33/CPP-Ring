#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB{
    private:
        std::string name;
        Weapon *weapon_thing;
    public:
        HumanB(std::string new_name);
        void setWeapon(Weapon *new_weapon);
        attack();
        ~HumanB();
}

#endif