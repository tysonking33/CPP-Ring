#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <string.h>
#include <stdbool.h>
#include "../includes/Bureaucrat.h"

class Bureaucrat;

class AForm{
    private:
        const std::string formName;
        bool isSigned;
        bool isExecuted;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm();
        AForm(std::string const &newFormName, int const newGradeToSign, int const newGradeToExecute);
        AForm(const AForm &F1);
        const std::string getFormName() const;
        bool getSigned() const;
        void beSigned(Bureaucrat &B);
        void GradeTooHighException(Bureaucrat &B);
        void GradeTooLowException(Bureaucrat &B);
        void beExecuted(Bureaucrat &B);
        bool getExecuted() const;
        AForm &operator=(const AForm &src);


        void execute(Bureaucrat const & executor) const;

        ~AForm();
};

std::ostream &operator<<(std::ostream &out, AForm *ref);

#endif