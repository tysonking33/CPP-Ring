#ifndef INTERN_H
#define INTERN_H

#include "../includes/ShrubberyCreationForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/Bureaucrat.h"

/*class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;*/

class Intern{
    typedef struct s_formList{
        std::string formName;
        AForm *formType;
    }               t_formList;
    public:
        AForm *makeForm(const std::string &newFormName, const std::string &formTarget) const;
        t_formList makeNew[2];
        Intern &operator=( const Intern &rhs );

        Intern();
        Intern(const Intern& I1);

        ~Intern();
};

#endif