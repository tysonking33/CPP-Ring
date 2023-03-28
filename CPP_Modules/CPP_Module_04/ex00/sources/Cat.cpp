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

Cat& Cat::operator = (const Cat &obj){
    *this = obj;
	return *this;
}

Cat::Cat (const Cat &a){
    *this = a;
}

Cat::Cat(){
    type = ("default cat");
}