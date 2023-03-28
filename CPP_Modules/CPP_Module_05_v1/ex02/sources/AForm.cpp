#include "../includes/AForm.h"

AForm::AForm() : name("Default form"), isSigned(false), gradeToSign(150), gradeToExecute(150)
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
        e.what();
    }
}

AForm::AForm(std::string newName, const int newGradeToSign, const int newGradeToExecute) : name(newName), isSigned(false), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute)
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
        e.what();
    }
}

AForm::AForm(const AForm &F1) : name(F1.getFormName()), isSigned(F1.getSigned()), gradeToSign(F1.getGradeToSign()), gradeToExecute(F1.getGradeToExecute())
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


std::string AForm::getFormName() const{
    return this->name;
}

bool AForm::getSigned() const{
    return this->isSigned;
}

int AForm::getGradeToSign() const{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat &B){
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

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high\n");
}

void AForm::execute(Bureaucrat const & executor) const{
    try
    {
        if (executor.getGrade() < 1)
        {
            throw GradeTooHighException();
        }
        else if (executor.getGrade() > getGradeToExecute())
        {
            throw GradeTooLowException();
        }
        else
            std::cout << executor.getName() << " executed " << getFormName() << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

}

std::ostream &operator<<(std::ostream &out, const AForm &ref){
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

AForm &AForm::operator=(const AForm &src)
{
    std::cout << "AForm Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

AForm::~AForm()
{
    std::cout << "Form destructor called\n";
}