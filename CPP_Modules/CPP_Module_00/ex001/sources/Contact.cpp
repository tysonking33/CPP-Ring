#include "../includes/Contact.h"

Contact::Contact(){
	//std::cout << "Default contact constructor called\n";
}

Contact::Contact(const Contact& C){
	std::cout << "Copy contact constructor called\n";
	index = C.index;
	first_name = C.first_name;
	last_name = C.last_name;
	nick_name = C.nick_name;
	number = C.number;
	secret = C.secret;
	truncFN = C.truncFN;
	truncLN = C.truncLN;
	truncNN = C.truncNN;
	truncSec = C.truncSec;
}


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

Contact &Contact::operator=(const Contact &src)
{
    std::cout << "Contact Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

Contact::~Contact(){
	std::cout << "Contact destructor called\n";
}