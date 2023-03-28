#include "../includes/Bureaucrat.h"

Bureaucrat::Bureaucrat(): name("Speve"), grade(69){
    std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string const &newName, int newGrade): name(newName), grade(newGrade){
    GradeTooHighException();
    GradeTooLowException();
    std::cout << "Constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& B1): name(B1.name), grade(B1.grade){
    std::cout << "Copy constructor called\n";
}

std::string Bureaucrat::getName() const{
    return name;
}

void Bureaucrat::incrementGrade(){
    GradeTooHighException();
    grade = grade - 1;
}

void Bureaucrat::decrementGrade(){
    GradeTooLowException();
    grade = grade + 1;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::GradeTooHighException() const{
    try{
        if (getGrade() > 1)
            std::cout << "valid grade\n";
        else
            throw("grade at max\n");
    }
    catch(std::string error){
        std::cout << error;
    }
}

void Bureaucrat::GradeTooLowException() const{
    try{
        if (getGrade() < 150)
            std::cout << "valid grade\n";
        else
            throw("grade at minimum\n");
    }
    catch(std::string error){
        std::cout << error;
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat& ref)
{
    out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called, Bureaucrat destroyed!\n";
}