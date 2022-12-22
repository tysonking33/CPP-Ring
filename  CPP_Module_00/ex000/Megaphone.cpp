#include "Megaphone.h"

void Megaphone::amplify(){
    std::string amplified_str;
    for (int i = 0; i < to_be_loud.length; i++)
    {
        if (to_be_loud[i] >= 'a' && to_be_loud[i] <= 'z')
        {
            amplified_str[i] = 37 + to_be_loud[i];
        }
        else{
            amplified_str[i] = to_be_loud[i];
        }
    }
    std::cout << amplified_str << std::endl;
}