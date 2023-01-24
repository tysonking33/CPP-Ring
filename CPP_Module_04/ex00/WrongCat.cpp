#include "WrongCat.h"

WrongCat::WrongCat(){
	type = "WrongCat";
}

void WrongCat::makeSound() const {
	std::cout << "meowwwwwww???\n";
}

WrongCat::~WrongCat(){
	std::cout << "wrong cat has imploded\n";
}
