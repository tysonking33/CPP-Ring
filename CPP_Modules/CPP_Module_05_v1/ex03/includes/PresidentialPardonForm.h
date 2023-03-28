#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "../includes/AForm.h"
#include "../includes/Bureaucrat.h"
#include <fstream>

class PresidentialPardonForm: public AForm{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &PF1);
        PresidentialPardonForm(const std::string newTarget);
        std::string getTarget() const;
        void pardonMe();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();
};

#endif