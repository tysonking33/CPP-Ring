#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap: public ScavTrap{
	public:
		FragTrap(const std::string newName);
		void highFivesGuys(void);
		~FragTrap();
        FragTrap& operator = (const FragTrap &obj);
        FragTrap (const FragTrap &a);
};

#endif
