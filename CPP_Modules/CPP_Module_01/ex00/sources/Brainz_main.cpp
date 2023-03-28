#include "../includes/Zombie.h"

int main()
{
	Zombie *zombu = newZombie("cock");
	zombu->announce();
	randomChump("farts");

	zombu->~Zombie();
	return 0;
}
