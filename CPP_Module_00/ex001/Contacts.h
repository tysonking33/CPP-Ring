#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>

class Contact{
public:
    int phone_nbr;
    std::string first_name;
    std::string short_first_name;
    std::string last_name;
    std::string short_last_name;
    std::string nickname;
    std::string short_nickname;
    std::string darkest_secret;
    std::string short_darkest_secret;
};

#endif
