#include "Dog.h"

Dog::Dog(){
	type = "Dog";
	bigDogBrain = new Brain();
}

void Dog::makeSound() const {
	std::cout << "wooooof!\n";
}

Dog::~Dog(){
	std::cout << "Dog done beeen destroyed\n";
	delete bigDogBrain;
}
