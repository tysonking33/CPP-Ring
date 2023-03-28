#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string.h>
#include "../includes/Bureaucrat.h"

class Bureaucrat;

class Form{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public:
        Form();
        Form(std::string newName, const int newGradeToSign, const int newGradeToExecute);
        Form(const Form& F1);

        std::string getFormName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat &B);

        Form &operator=(const Form &src);

        ~Form();

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, const Form& ref);


#endif