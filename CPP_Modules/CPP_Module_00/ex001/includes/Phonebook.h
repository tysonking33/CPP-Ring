#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
class Phonebook{
	public:
		Contact PB[8];
		int curr_con_nbr;
		Phonebook();
		void ADD();
		void SEARCH();
		void EXIT();
		void addPn();
		void printPB();
		~Phonebook();
		//Phonebook(const Phonebook& P);
		//Phonebook &operator=(const Phonebook &src);

};

#endif

