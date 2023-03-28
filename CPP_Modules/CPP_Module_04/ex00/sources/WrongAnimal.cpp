#include "WrongAnimal.h"

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong animal destroyed\n";
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &obj){
    *this = obj;
	return *this;
}

WrongAnimal::WrongAnimal (const WrongAnimal &a){
    *this = a;
}

WrongAnimal::WrongAnimal(): type("default wrong animal"){}