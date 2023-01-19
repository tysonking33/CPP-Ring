#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "../ex01/ScavTrap.h"

class FragTrap: public ScavTrap{
	public:
		FragTrap(const std::string newName);
		void highFivesGuys(void);
		~FragTrap();
};

#endif
