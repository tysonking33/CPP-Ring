#include "Megaphone.h"

std::string Megaphone::amplify(char *src){
    std::string amplified_str;
	to_be_loud = src;
    for (size_t i = 0; i < to_be_loud.length(); i++)
    {
        if (to_be_loud[i] >= 'a' && to_be_loud[i] <= 'z')
        {
			amplified_str.append(1, to_be_loud[i] - 32);
        }
        else{
			amplified_str.append(1, to_be_loud[i]);
		}
    }
	return amplified_str;
}
