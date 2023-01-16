#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact{
	public:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		int number;
		std::string secret;
		std::string truncFN;
		std::string truncLN;
		std::string truncNN;
		std::string truncSec;
		void printInPb(int index);
		void printAll();
		void truncate(int type);
};

#endif
