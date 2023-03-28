#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
public:
	Zombie();
	Zombie(const Zombie& Z);
	Zombie &operator=(const Zombie &src);

	std::string zombName;
	void announce(void);
	~Zombie();
};

/* found in ex00 */
Zombie* newZombie(std::string name);
void randomChump(std::string name);

/* found in ex01 */
Zombie *zombieHorde(int N, std::string name);
void	changeName(Zombie *zomb, std::string name);
#endif

