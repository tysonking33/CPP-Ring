#include "FragTrap.h"

FragTrap::FragTrap(const std::string newName) : ScavTrap(newName){
	setName(newName);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	printStatus();
}

void FragTrap::highFivesGuys(void){
	std::cout << getName() << " wants a high five!\n";
}

FragTrap::~FragTrap(){
	std::cout << getName() << " destroyed!\n";
}
