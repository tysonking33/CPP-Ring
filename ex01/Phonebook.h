#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contacts.h"

class Phonebook{
public:
    Contacts *contact_arr[8];
    int curr_contact;
    Phonebook();
    void ADD();
    void SEARCH();
    void EXIT();
}