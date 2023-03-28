#include "../includes/ShrubberyCreationForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/Bureaucrat.h"
#include "../includes/Intern.h"


int main(){
    Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 3);
	AForm		*form;

	form = usefulIdiot.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("presidential pardon", "Maynard");
    //form->pardonMe();
	if (form)
		delete form;
	form = usefulIdiot.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;

    Bureaucrat *a = new Bureaucrat();
    Intern *z = new Intern();
    AForm *b = z->makeForm("SomeRandomForm", "Clown");
    b = z->makeForm("presidential pardon", "Clown");
    b->beSigned(*a);

    return 0;
}