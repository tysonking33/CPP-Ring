#include "../includes/Zombie.h"

Zombie* newZombie( std::string name ){
	Zombie *newZomb = new Zombie;
	newZomb->zombName = name;
	return newZomb;
}
