#include "../includes/Zombie.h"

Zombie::Zombie(){
    zombName = "0";
    std::cout << "Default Zombie constructor called\n";
}

Zombie::Zombie(const Zombie& SC1): zombName(SC1.zombName){
    std::cout << "Copy Zombie constructor called\n";
}

Zombie &Zombie::operator=(const Zombie &src){
	std::cout << "Zombie Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

void Zombie::announce(void)
{
	std::cout << zombName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << zombName << " destroyed\n";
}
