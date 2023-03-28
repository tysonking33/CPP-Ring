#include "../includes/Animal.h"

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {}

Animal::~Animal(){
	std::cout << "Animal destroyed\n";
}

Animal& Animal::operator = (const Animal &obj){
    *this = obj;
	return *this;
}

Animal::Animal (const Animal &a){
    *this = a;
}

Animal::Animal(): type("default animal"){}