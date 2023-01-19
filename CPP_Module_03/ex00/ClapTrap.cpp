#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string newName){
	name = newName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	printStatus();
}

void ClapTrap::printStatus(){
	std::cout << name << " created with:\n";
	std::cout << hitPoints << " hitpoints\n";
	std::cout << energyPoints << " energy points\n";
	std::cout << attackDamage << " attack damage\n";
}

void ClapTrap::attack(const std::string& target){
	if (hitPoints <= 0)
		std::cout << name << " can't attack " << target << " because " << name << " is dead\n";
	if (energyPoints <= 0)
		std::cout << name << " can't attack " << target << " becaue " << name << " has no energy points\n";
	if (hitPoints > 0 && energyPoints > 0)
		std::cout << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints - amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << name << " took " << amount << " points of damage and now has " << hitPoints << " hit points left!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	hitPoints = hitPoints + amount;
	std::cout << name << " gained " << amount << " points of health and now has " << hitPoints << " hit points left!\n";
}

ClapTrap::~ClapTrap(){
	std::cout << name << " destroyed!\n";
}


void ClapTrap::setName(std::string newName){
	name = newName;
}

std::string ClapTrap::getName(){
	return name;
}

void ClapTrap::setHitPoints(int newHealth){
	hitPoints = newHealth;
}

int ClapTrap::getHitPoints(){
	return hitPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints){
	energyPoints = newEnergyPoints;
}

int ClapTrap::getEnergyPoints(){
	return energyPoints;
}

void ClapTrap::setAttackDamage(int newAttackDamage){
	attackDamage = newAttackDamage;
}

int ClapTrap::getAttackDamage(){
	return attackDamage;
}

ClapTrap::ClapTrap(){}
