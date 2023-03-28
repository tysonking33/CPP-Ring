#include "../includes/Form.h"

Form::Form() : name("Default form"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    try
    {
        if ((gradeToSign > 150) || (gradeToExecute > 150))
        {
            throw GradeTooLowException();
        }
        if ((gradeToSign > 1) || (gradeToExecute > 1))
        {
            throw GradeTooHighException();
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
}

Form::Form(std::string newName, const int newGradeToSign, const int newGradeToExecute) : name(newName), isSigned(false), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute)
{
    try
    {
        if ((gradeToSign > 150) || (gradeToExecute > 150))
        {
            throw GradeTooLowException();
        }
        if ((gradeToSign > 1) || (gradeToExecute > 1))
        {
            throw GradeTooHighException();
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
}

Form::Form(const Form &F1) : name(F1.name), isSigned(F1.isSigned), gradeToSign(F1.getGradeToSign()), gradeToExecute(F1.getGradeToExecute())
{
    std::cout << "Copy form constructor called\n";
    try
    {
        if ((gradeToSign > 150) || (gradeToExecute > 150))
        {
            throw GradeTooLowException();
        }
        if ((gradeToSign > 1) || (gradeToExecute > 1))
        {
            throw GradeTooHighException();
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
}


std::string Form::getFormName() const{
    return this->name;
}

bool Form::getSigned() const{
    return isSigned;
}

int Form::getGradeToSign() const{
    return gradeToSign;
}

int Form::getGradeToExecute() const{
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat &B){
    try{
        if (B.getGrade() <= gradeToSign)
            this->isSigned = true;
        else
            throw GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high\n");
}

std::ostream &operator<<(std::ostream &out, const Form &ref){
    std::string signed_status;
    if (ref.getSigned() == 1)
        signed_status = "signed";
    else
        signed_status = "unsigned";
    out << "Form name: " << ref.getFormName()
        << ", signed status: " << signed_status
        << ", grade to sign: " << ref.getGradeToSign()
        << ", grade to execute: " << ref.getGradeToExecute() << std::endl;
    return out;
}

Form &Form::operator=(const Form &src)
{
    std::cout << "Form Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called\n";
}
