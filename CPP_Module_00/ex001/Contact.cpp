#include "Contact.h"

void Contact::printInPb(int index){
	std::string indx_str = std::to_string(index);
	while (indx_str.length() != 10)
	   indx_str += " ";	
	std::cout << "|" << indx_str << "|";
	if (first_name.length() != 10)
		std::cout << truncFN << "|";
	else
		std::cout << first_name << "|";
	if (last_name.length() != 10)
		std::cout << truncLN << "|";
	else
		std::cout << last_name << "|";
	if (nick_name.length() != 10)
		std::cout << truncNN << "|";
	else
		std::cout << nick_name << "|";
}

void Contact::printAll(){
	std::cout << "first name: " << first_name << std::endl;
	std::cout << "last name: " << last_name << std::endl;
	std::cout << "nick name: " << nick_name << std::endl;
	std::cout << "secret: " << secret << std::endl;
	std::cout << "phone number: " << number << std::endl;
}

void Contact::truncate(int type){
	/* type == 1 => first name;
	 * type == 2 => last name;
	 * type == 3 => nick_name; */
	if ((type == 1) && (first_name.length() > 10))
		truncFN = first_name.substr(0, 9) + ".";
	else if ((type == 1) && (first_name.length() < 10))
	{
		truncFN = first_name;
		while (truncFN.length() != 10){
			truncFN = truncFN + " ";
		}
	}
	if ((type == 2) && (last_name.length() > 10))
		truncLN = last_name.substr(0, 9) + ".";
	else if ((type == 2) && (last_name.length() < 10))
	{
		truncLN = last_name;
		while (truncLN.length() != 10)
			truncLN = truncLN + " ";
	}
	if ((type == 3) && (nick_name.length() > 10))
		truncNN = nick_name.substr(0, 9) + ".";
	else if ((type == 3) && (nick_name.length() < 10))
	{
		truncNN = nick_name;
		while (truncNN.length() != 10)
			truncNN = truncNN + " ";
	}
	
	if ((type == 4) && (secret.length() > 10))
		truncSec = secret.substr(0,9) + ".";
	else if ((type == 4) && (first_name.length() < 10))
	{
		truncSec = secret;
		while (truncSec.length() != 10)
			truncSec = truncSec + " ";
	}
}
