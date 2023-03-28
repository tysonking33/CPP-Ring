#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string const &newName, int newGrade);
        Bureaucrat(const Bureaucrat& B1);
        Bureaucrat();
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        int getGrade() const;
        void GradeTooHighException() const;
        void GradeTooLowException() const;
        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& ref);

#endif