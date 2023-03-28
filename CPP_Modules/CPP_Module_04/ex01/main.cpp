#include "Brain.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal *Arr[10];
	for (int i = 0; i < 5; i++)
	{
		Arr[i] = new Dog();
	}
	for (int j = 5; j < 10; j++) 
	{
		Arr[j] = new Cat();
	}

	for (int i = 0; i < 10; i++){
		std::cout << i << ".";
		delete Arr[i];
	}

	return 0;
}
