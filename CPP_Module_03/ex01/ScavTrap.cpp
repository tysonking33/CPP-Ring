#include "ScavTrap.h"

ScavTrap::ScavTrap(const std::string newName) : ClapTrap(){
	setName(newName);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	printStatus();
}

void ScavTrap::guardGate(){
	mode = "Gate keeper mode";
	std::cout << getName() << " now in " << mode << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << getName() << " destroyed\n";
}
