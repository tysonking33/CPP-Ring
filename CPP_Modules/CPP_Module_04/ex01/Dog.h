#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal{
	private:
		Brain *bigDogBrain;
	public:
		void makeSound() const;
		Dog();
		~Dog();
};

#endif
