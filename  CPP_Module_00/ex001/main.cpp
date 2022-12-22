#include "Phonebook.h"

int main(){
    Phonebook *PB = new Phonebook();
    std::string user_input;
    while (user_input){
        std::cout << "Enter command\n";
        std::cin >> user_input;
        if (user_input == "EXIT"){
            PB->EXIT();
            break ;
        }
        else if user_input == "ADD"){
            PB->ADD();
        }
        else if user_input == "SEARCH"){
            PB->SEARCH();
        }
    }
    return 0;
}