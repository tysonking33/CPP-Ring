#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap: public ClapTrap{
	private:
		std::string mode;
	public:
        ScavTrap();
		ScavTrap(const std::string newName);
		void guardGate();
		~ScavTrap();
        ScavTrap& operator = (const ScavTrap &obj);
        ScavTrap (const ScavTrap &a);
};

#endif
