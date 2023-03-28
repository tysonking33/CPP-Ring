#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "../includes/AForm.h"
#include "../includes/Bureaucrat.h"
#include <fstream>

class ShrubberyCreationForm: public AForm{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &SCF1);

        ShrubberyCreationForm(const std::string newTarget);
        std::string getTarget() const;
        void createTargetShrub();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

        ~ShrubberyCreationForm();
};

#endif