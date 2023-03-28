#include "../includes/Phonebook.h"

Phonebook::Phonebook(){
	curr_con_nbr = 0;
	std::cout << "default Phonebook constructor called" << std::endl;
}

/*Phonebook::Phonebook(const Phonebook& P): PB(P.PB){
	//for (int i = 0; i < 8; i++){
	//	(this->PB[i])(P.PB[i]);
	//}
	std::cout << "Copy Phonebook constructor called" << std::endl;
	printPB();

}

Phonebook &Phonebook::operator=(const Phonebook &src){
	std::cout << "Phonebook Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
	for (int i = 0; i < 8; i++){
		((this->PB[i])(src.PB[i]));
	}
	printPB();
    return *this;
}*/


void Phonebook::ADD(){
	if (curr_con_nbr > 7)
		curr_con_nbr = curr_con_nbr - 6;

	std::cout << "Enter first name: \n";
	std::cin >> PB[curr_con_nbr].first_name;
	std::cout << "Enter last name: \n";
	std::cin >> PB[curr_con_nbr].last_name;
	std::cout << "Enter nickname: \n";
	std::cin >> PB[curr_con_nbr].nick_name;
	std::cout << "Enter darkest secret: \n";
	std::cin >> PB[curr_con_nbr].secret;

	addPn();
	PB[curr_con_nbr].truncate(1);
	PB[curr_con_nbr].truncate(2);
	PB[curr_con_nbr].truncate(3);
	PB[curr_con_nbr].truncate(4);
	curr_con_nbr++;
}

void Phonebook::addPn(){
	std::string temp_phn;
	std::cout << "Enter phone number: \n";
	std::cin >> temp_phn;
	bool number = true;
	for (int i = 0; i < (int)temp_phn.length(); i++){
		if (temp_phn[i] < '0' && temp_phn[i] > '9')
			number = false;
	}
	if (number == false){
		std::cout << "phone number should only consist of digits\n";
		addPn();
	}
	else if (temp_phn.length() > 10){
		std::cout << "phone number too long\n";
		addPn();
	}
	else
		PB[curr_con_nbr].number = std::stoi(temp_phn);
}

void Phonebook::SEARCH(){
	printPB();
	int searched_index;
	std::cout << "Enter the index to display: \n";
	std::cin >> searched_index;
	if ((searched_index > 7) || (searched_index < 0)){
		std::cout << "Index not avalible. Search again.\n";
		SEARCH();
	}
	PB[searched_index].printAll();
}

void Phonebook::printPB(){
	std::cout << "|-------------------------------------------|\n";
	std::cout << "| index  |firstName | lastName | nickname   |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++){
		PB[i].printInPb(i);
		std::cout << "\n";
	}
	std::cout << "|-------------------------------------------|\n";
}

void Phonebook::EXIT(){
	for (int i = 0; i < 7; i++)
		delete &PB[i];
	delete[] &PB;
}
