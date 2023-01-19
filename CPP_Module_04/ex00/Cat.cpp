#include "Cat.h"

Cat::Cat(){
	type = "Cat";
}

void Cat::makeSound(){
	std::cout << "meowwwwwww\n";
}

Cat::~Cat(){
	std::cout << "cat has imploded\n";
}
