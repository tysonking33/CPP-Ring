#include "Zombie.h"

void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string new_name){
    name = new_name
}
void Zombie::get_name( void ){
    std::cout << name;
}

Zombie::~Zombie(){
    std::cout << name << " has been destroyed\n";
}