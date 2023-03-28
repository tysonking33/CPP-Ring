#include "../includes/Zombie.h"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombHo = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		changeName(&zombHo[i], name);
	}
	return zombHo;
}

void    changeName(Zombie *zomb, std::string name){
	zomb->zombName = name;
}
