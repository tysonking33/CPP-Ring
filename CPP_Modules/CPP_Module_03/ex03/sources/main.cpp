#include "../includes/ClapTrap.h"
#include "../includes/FragTrap.h"
#include "../includes/ScavTrap.h"


int main(){
    FragTrap *FT = new FragTrap("farts");
    FT->highFivesGuys();
	ScavTrap *ST = new ScavTrap("Horse");
	ST->attack("malls");
	ST->takeDamage(1);
	ST->beRepaired(2);
	ST->guardGate();

	ST->~ScavTrap();
	return 0;
}
