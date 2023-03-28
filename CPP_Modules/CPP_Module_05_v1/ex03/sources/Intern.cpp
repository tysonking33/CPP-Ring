#include "../includes/Intern.h"


Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &I1)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = I1;
}

Intern	&Intern::operator=( const Intern &rhs ){
	std::cout << "Intern Copy Assignement Constructor called" << std::endl;
    if (this == &rhs)
		return *this;

    return *this;
}

AForm *Intern::makeForm(const std::string &newFormName, const std::string &formTarget) const {
    t_formList forms[] =
	{
		{ "presidential pardon", new PresidentialPardonForm(formTarget) },
		{ "robotomy request", new RobotomyRequestForm(formTarget) },
		{ "shrubbery creation", new ShrubberyCreationForm(formTarget) },
		{ "", NULL }
	};
	AForm	*resultForm = NULL;

	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == newFormName)
			resultForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (resultForm == NULL)
		std::cout << "Intern did not find the form " << newFormName << std::endl;
	else
		std::cout << "Intern creates " << newFormName << std::endl;
	return resultForm;

}

Intern::~Intern(){
    std::cout << "Intern destroyed\n";
}