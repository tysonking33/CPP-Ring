#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.h"

class Animal{
	protected:
		std::string type;
	public:
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~Animal();
};

#endif
