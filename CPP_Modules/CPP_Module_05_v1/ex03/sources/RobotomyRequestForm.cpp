#include "../includes/RobotomyRequestForm.h"


RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("default"){
    std::cout << drillNoize() << std::endl;
    std::cout << "Default RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RF1) : AForm("PresidentialPardonForm", 25, 5), target(RF1.getTarget())
{
    std::cout << "RobotomyRequestForm Copy Constructor called!\n";

    *this = RF1;
}


RobotomyRequestForm::RobotomyRequestForm(const std::string newTarget): AForm("RobotomyRequestForm", 72, 45), target(newTarget){
    std::cout << drillNoize() << std::endl;
    std::cout << "RobotomyRequestForm constructor called\n";
}

std::string RobotomyRequestForm::getTarget() const{
    return this->target;
}

std::string RobotomyRequestForm::drillNoize(){
    return "HiGh fReQUenCy WHirLiNg";
}

void RobotomyRequestForm::robotomize(){
    int randomNumber;

    srand((unsigned) time(0));
    randomNumber = rand();

    try{
        if (randomNumber % 2 == 1){
            std::cout << drillNoize() << std::endl;
        }
        else
            throw ("failure to drill was because Bureaucrat was unlucky!\n");
    }
    catch(char const *ll){
        std::cout << ll;
    }
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm destroyed\n";
}