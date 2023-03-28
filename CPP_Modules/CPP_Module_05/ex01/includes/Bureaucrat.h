#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "../includes/Form.h"

class Form;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const &newName, int newGrade);
        Bureaucrat(const Bureaucrat& B1);
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        int getGrade() const;
        void GradeTooHighException() const;
        void GradeTooLowException() const;
        Bureaucrat &operator=(const Bureaucrat &src);


        void signForm(Form* ref);
        ~Bureaucrat();

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& ref);

#endif