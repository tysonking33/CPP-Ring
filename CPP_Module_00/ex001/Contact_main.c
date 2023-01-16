#include "Contact.h"

int main(){
	Contact *new_contact = new Contact();
	new_contact->printAll();
	new_contact->first_name = "Cock";
	new_contact->last_name = "Balls";
	new_contact->nick_name = "CBT";
	

	new_contact->printAll();
	

	new_contact->nick_name = "whoopytytssfafasasffs";

	new_contact->printAll();

	new_contact->truncate(3);
	new_contact->printAll();

	return 0;
}
