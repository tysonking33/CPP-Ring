#include "../includes/ShrubberyCreationForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/PresidentialPardonForm.h"

int main(){
    ShrubberyCreationForm *newShrub = new ShrubberyCreationForm("fast");
    std::cout << "target is: " << newShrub->getTarget() << std::endl;
    newShrub->createTargetShrub();

    RobotomyRequestForm *newRobot = new RobotomyRequestForm("fastNslow");
    std::cout << "target is: " << newRobot->getTarget() << std::endl;
    newRobot->robotomize();

    PresidentialPardonForm *newPardon = new PresidentialPardonForm("Purrp");
    std::cout << "target is: " << newPardon->getTarget() << std::endl;
    newPardon->pardonMe();



    const Bureaucrat *Bobby = new Bureaucrat("Bob", 136);
    newShrub->execute(*Bobby);
    newRobot->execute(*Bobby);
    newPardon->execute(*Bobby);

    newShrub->~ShrubberyCreationForm();
    newRobot->~RobotomyRequestForm();
    newPardon->~PresidentialPardonForm();
    return 0;
}