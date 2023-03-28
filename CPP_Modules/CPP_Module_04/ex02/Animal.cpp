#include "Animal.h"

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {}

Animal::~Animal(){
	std::cout << "Animal destroyed\n";
}
