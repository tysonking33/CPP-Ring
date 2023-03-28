#include "../includes/Zombie.h"

void randomChump( std::string name ){
	Zombie *chump = new Zombie();
	chump->zombName = name;
	chump->announce();
}
