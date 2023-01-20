#include "Cat.h"

Cat::Cat(){
	type = "Cat";
}

void Cat::makeSound() const {
	std::cout << "meowwwwwww\n";
}

Cat::~Cat(){
	std::cout << "cat has imploded\n";
}
