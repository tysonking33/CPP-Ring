#include "../includes/ScavTrap.h"

int main(){
	ScavTrap *ST = new ScavTrap("Horse");
	ST->attack("malls");
	ST->takeDamage(1);
	ST->beRepaired(2);
	ST->guardGate();

	ST->~ScavTrap();
	return 0;
}
