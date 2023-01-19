#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../ex00/ClapTrap.h"

class ScavTrap: public ClapTrap{
	private:
		std::string mode;
	public:
		ScavTrap(const std::string newName);
		void guardGate();
		~ScavTrap();

};

#endif
