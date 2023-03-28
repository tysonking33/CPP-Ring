#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal{
	public:
		void makeSound() const;
		Dog();
		~Dog();
        Dog& operator = (const Dog &obj);
        Dog (const Dog &a);
        Dog();
};

#endif
