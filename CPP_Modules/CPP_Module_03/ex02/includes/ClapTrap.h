#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap& operator = (const ClapTrap &obj);
		ClapTrap(std::string newName);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();

		void setName(std::string newName);
		std::string getName();

		void setHitPoints(int newHealth);
		int getHitPoints();

		void setEnergyPoints(int newEnergyPoints);
		int getEnergyPoints();

		void setAttackDamage(int newAttackDamage);
		int getAttackDamage();

		void printStatus();

		ClapTrap();
        ClapTrap (const ClapTrap &a);
};

#endif
