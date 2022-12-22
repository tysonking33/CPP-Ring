#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zomhorde[N];
    for (int i = 0; i < N; i++)
    {
        Zombie *new_zombie = new Zombie();
        new_zombie->set_name() = name;
        zomhorde[i] = new_zombie;
    }
    return (zomhorde);
}