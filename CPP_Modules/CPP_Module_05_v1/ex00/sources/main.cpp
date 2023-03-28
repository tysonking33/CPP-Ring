#include "../includes/Bureaucrat.h"

int main(){
    std::cout << "dfsdfs\n";
    Bureaucrat *B = new Bureaucrat("sbeve", 123);
    std::cout << B->getName() << std::endl;
    B->incrementGrade();
    std::cout << "Grade is " << B->getGrade() << std::endl;
    B->incrementGrade();
    std::cout << "Grade is " << B->getGrade() << std::endl;
    B->decrementGrade();
    std::cout << "Grade is " << B->getGrade() << std::endl;
    std::cout << *B;


    try
	{
		Bureaucrat human("Judy", 50);
		std::cout << human << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

    return 0;
}