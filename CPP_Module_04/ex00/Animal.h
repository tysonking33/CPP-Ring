#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		virtual void makeSound() = 0;
		std::string getType();
};

#endif
