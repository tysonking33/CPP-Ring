#include "Zombie.h"

void Zombie::announce(void)
{
	std::cout << zombName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << zombName << " destroyed\n";
}
