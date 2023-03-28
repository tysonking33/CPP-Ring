#include "../includes/ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("default"){
	std::cout << "Default ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &SCF1) : AForm("ShrubberyCreationForm", 25, 5), target(SCF1.getTarget())
{
    std::cout << "ShrubberyCreationForm Copy Constructor called!\n";

    *this = SCF1;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string newTarget): AForm("ShrubberyCreationForm", 145, 137), target(newTarget){
	std::cout << "ShrubberyCreationForm constructor called\n";
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->target;
}

void ShrubberyCreationForm::createTargetShrub(){
    std::ofstream MyFile(getTarget().append("__shrubbery").c_str());
    for (int i = 0; i < 5; i++)
		{
			MyFile <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".dnicecock\\$$bud$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
		}
		MyFile.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destroyed\n";
}