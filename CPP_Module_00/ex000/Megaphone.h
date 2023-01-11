#ifndef MEGAPHONE_H
#define MEGAPHONE_H

#include <string>
#include <iostream>
#include <cstring>


using namespace std;

class Megaphone{
    private:
        std::string to_be_loud;
    public:
		std::string amplify(char *src);
};

#endif
