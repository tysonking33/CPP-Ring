#include "Phonebook.h"

int main(){
	Phonebook *newPB = new Phonebook();
	std::string prompt;
	int i = 1;
	while (i == 1)
	{
		std::cout << "Enter prompt: \n";
		std::cin >> prompt;
		if (prompt == "EXIT"){
			newPB->EXIT();
			i = 0;
		}
		else if (prompt == "ADD")
			newPB->ADD();
		else if (prompt == "SEARCH")
			newPB->SEARCH();
		else
			std::cout << "invalid prompt \n";
	}


	return 0;
}
