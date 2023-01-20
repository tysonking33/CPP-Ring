#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal{
	public:
		void makeSound() const;
		Dog();
		~Dog();
};

#endif
