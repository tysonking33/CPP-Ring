#include "../includes/Zombie.h"

int main()
{
	Zombie *newHorde;
	newHorde = zombieHorde(5, "nalls");
	for (int i = 0; i < 5; i++)
	{
		newHorde[i].announce();
	}
	for (int i = 0; i< 5; i++)
	{
		newHorde[i].~Zombie();
	}
	return 0;
}
