#include "../includes/Bureaucrat.h"

Bureaucrat::Bureaucrat(): name("Default Bureaucrat"), grade(150){
    try{
        if (grade > 150){
            throw GradeTooHighException();
        }
        if (grade < 1){
            throw GradeTooLowException();
        }
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
}

Bureaucrat::Bureaucrat(std::string const &newName): name(newName), grade(150){
    try{
        if (grade > 150){
            throw GradeTooHighException();
        }
        if (grade < 1){
            throw GradeTooLowException();
        }
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
}

Bureaucrat::Bureaucrat(int newGrade): name("Default Bureaucrat"), grade(newGrade){
    try{
        if (grade > 150){
            throw GradeTooHighException();
        }
        if (grade < 1){
            throw GradeTooLowException();
        }
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
}

Bureaucrat::Bureaucrat(std::string const &newName, int newGrade): name(newName), grade(newGrade){
    try{
        if (grade > 150){
            throw GradeTooHighException();
        }
        if (grade < 1){
            throw GradeTooLowException();
        }
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
}

std::string Bureaucrat::getName() const{
    return this->name;
}

void Bureaucrat::incrementGrade(){
    GradeTooHighException();
    grade = grade - 1;
}

void Bureaucrat::decrementGrade(){
    GradeTooLowException();
    grade = grade + 1;
}

int Bureaucrat::getGrade() const {
    return grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade too low\n");
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade too high\n");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& ref)
{
    out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
    return out;
}

void	Bureaucrat::signForm(AForm *form)
{
	form->beSigned(*this);
    if (form->getSigned() == true){
        std::cout << getName() << " signed " << form->getFormName() << std::endl;
    }
    else{
        std::cout << getName() << " couldn't sign " << form->getFormName() << " because an L was taken!!!\n";
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Bureaucrat Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called, Bureaucrat destroyed!\n";
}