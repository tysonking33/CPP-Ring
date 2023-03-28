#include "../includes/ClapTrap.h"

int main(){
	ClapTrap *CT = new ClapTrap("cock");

	CT->attack("balls");
	CT->takeDamage(2);
	CT->beRepaired(1);
	CT->beRepaired(1);

	return 0;
}
