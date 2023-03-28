#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string.h>
#include <stdbool.h>
#include "../includes/Bureaucrat.h"

class Bureaucrat;

class Form{
    private:
        const std::string formName;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(std::string const &newFormName, int const newGradeToSign, int const newGradeToExecute);
        Form(const Form& F1);
        const std::string getFormName() const;
        bool getSigned() const;
        void beSigned(Bureaucrat &B);
        void GradeTooHighException(Bureaucrat &B);
        void GradeTooLowException(Bureaucrat &B);
        Form &operator=(const Form &src);

        ~Form();
};

std::ostream &operator<<(std::ostream &out, Form *ref);

#endif