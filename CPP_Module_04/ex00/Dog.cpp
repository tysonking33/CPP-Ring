#include "Dog.h"

Dog::Dog(){
	type = "Dog";
}

void Dog::makeSound() const {
	std::cout << "wooooof!\n";
}

Dog::~Dog(){
	std::cout << "Dog done beeen destroyed\n";
}
