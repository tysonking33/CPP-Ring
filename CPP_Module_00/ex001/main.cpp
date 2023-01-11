#include "Phonebook.h"

int main(){
	int i = 0;
    Phonebook *PB = new Phonebook();
    std::string user_input;
    while (i == 0){
        std::cout << "Enter command\n";
        std::cin >> user_input;
        if (user_input == "EXIT"){
            PB->EXIT();
             i = 1;
        }
        else if (user_input == "ADD"){
            PB->ADD();
        }
        else if (user_input == "SEARCH"){
            PB->SEARCH();
        }
    }
    return 0;
}
