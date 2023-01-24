#include "WrongAnimal.h"

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong animal destroyed\n";
}
