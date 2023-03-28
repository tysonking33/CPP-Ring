#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <string.h>
#include "../includes/Bureaucrat.h"

class Bureaucrat;

class AForm{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public:
        AForm();
        AForm(std::string newName, const int newGradeToSign, const int newGradeToExecute);
        AForm(const AForm& F1);

        std::string getFormName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat &B);

        AForm &operator=(const AForm &src);

        ~AForm();

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

        void execute(Bureaucrat const & executor) const;


};

std::ostream &operator<<(std::ostream &out, const AForm& ref);


#endif