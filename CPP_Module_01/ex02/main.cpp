/*Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.*/

#include <iostream>
#include <string>

int main(){
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << "memory address of the string variable: " << &var << std::endl;
    std::cout << "memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << "memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "value of the string variable: " << var << std::endl;
    std::cout << "value pointed to by stringPTR: " << stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}