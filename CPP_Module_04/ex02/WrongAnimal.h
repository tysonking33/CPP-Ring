#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~WrongAnimal();
};

#endif
