#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal{
	private:
		Brain *bigCatBrain;
	public:
		Cat();
		void makeSound() const;
		~Cat();
};

#endif

