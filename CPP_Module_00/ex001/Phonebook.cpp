#include "Phonebook.h"

Phonebook::Phonebook(){
    curr_contact = 0;
}

void Phonebook::ADD(){
    curr_contact = curr_contact % 8;
    Contact *new_contact = new Contact();
    std::cout << "Enter first name\n";
    std::cin >> new_contact->first_name;
    if ((new_contact->first_name).length() > 10){
        new_contact->short_first_name = (new_contact->first_name).substr(0, 9);
        new_contact->short_first_name[10] = ".";
    }
    else {
        new_contact->short_first_name = new_contact->first_name;
    }

    std::cout << "Enter last name\n";
    std::cin >> new_contact->last_name;
    if ((new_contact->last_name).length() > 10){
        new_contact->short_last_name = (new_contact->last_name).substr(0, 9);
        new_contact->short_last_name[10] = ".";
    }
    else {
        new_contact->short_last_name = new_contact->last_name;
    }
    
    std::cout << "Enter nickname\n";
    std::cin >> new_contact->nickname;
    if ((new_contact->nickname).length() > 10){
        new_contact->short_nickname = (new_contact->nickname).substr(0, 9);
        new_contact->short_nickname[10] = ".";
    }
    else {
        new_contact->short_nickname = new_contact->nickname;
    }

    std::cout << "Enter darkest secret\n";
    std::cin >> new_contact->darkest_secret;
    if ((new_contact->darkest_secret).length() > 10){
        new_contact->short_darkest_secret = (new_contact->darkest_secret).substr(0, 9);
        new_contact->short_darkest_secret[10] = ".";
    }
    else {
        new_contact->short_darkest_secret = new_contact->darkest_secret;
    }
    free(contact_arr[curr_contact]);
    contact_arr[curr_contact] = new_contact;
    curr_contact++;
}

void Phonebook::SEARCH(){
    std::cout << "index     |" <<  "first name |" <<  "last name |" <<  "nickname |" << "darkest secret |\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << i << contact_arr[i->short_first_name] << contact_arr[i->short_last_name] << contact_arr[i->short_nickname] << contact_arr[i->short_darkest_secret] << std::endl;
    }
    int index_to_show;
    std::cout << "Enter index to be displayed\n";
    std::cin >> index_to_show;
    if (index_to_show < 8){
        int i = index_to_show;
        std::cout << contact_arr[i->short_first_name] << std::endl;
        std::cout << contact_arr[i->short_last_name] << std::endl;
        std::cout << contact_arr[i->short_nickname] << std::endl;
        std::cout << contact_arr[i->short_darkest_secret] << std::endl;
    }
    else{
        std::cout << "Index out of range 0 to 8\n";
    }

}
void Phonebook::EXIT(){
	for (int i = 0; i < 8; i++)
	{
		delete contact_arr[1];
	}
}

Phonebook::~Phonebook(){}
