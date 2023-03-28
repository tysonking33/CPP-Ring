#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal{
	public:
		Cat();
		void makeSound() const;
		~Cat();
        Cat& operator = (const Cat &obj);
        Cat (const Cat &a);
        Cat();
};

#endif

