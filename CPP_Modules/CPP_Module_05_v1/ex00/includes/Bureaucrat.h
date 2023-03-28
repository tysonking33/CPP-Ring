#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string.h>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const &newName);
        Bureaucrat(int newGrade);
        Bureaucrat(std::string const &newName, int newGrade);

        std::string getName() const;

        void incrementGrade();
        void decrementGrade();
        int getGrade() const ;

        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat& ref);


#endif