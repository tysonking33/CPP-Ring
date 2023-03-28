#include "../includes/Form.h"

Form::Form() : formName("Default form"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Default form constructor called\n";
}

Form::Form(std::string const &newFormName, int const newGradeToSign, int const newGradeToExecute)
    : formName(newFormName), isSigned(false), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute)
{
    std::cout << "Form constructor called\n";
}

Form::Form(const Form &F1) : formName(F1.formName), isSigned(F1.isSigned), gradeToSign(F1.gradeToSign), gradeToExecute(F1.gradeToExecute)
{
    std::cout << "Copy form constructor called\n";
}

const std::string Form::getFormName() const
{
    return formName;
}

bool Form::getSigned() const
{
    return isSigned;
}

void Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() <= gradeToSign)
        this->isSigned = true;
}

void Form::GradeTooHighException(Bureaucrat &B)
{
    try
    {
        if (B.getGrade() <= gradeToExecute)
            std::cout << "Grade high enough to execute Form\n";
        else if (B.getGrade() <= gradeToSign)
            std::cout << "Grade high enough to sign Form\n";
        else
            throw("grade lower than form requirements\n");
    }
    catch (std::string error)
    {
        std::cout << error;
    }
}

void Form::GradeTooLowException(Bureaucrat &B)
{
    try
    {
        if (B.getGrade() > gradeToSign)
        {
            throw("grade lower than form requirements\n");
        }
        else
            std::cout << "Grade high enough for Form\n";
    }
    catch (std::string error)
    {
        std::cout << error;
    }
}

Form &Form::operator=(const Form &src)
{
    std::cout << "Form Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

std::ostream &operator<<(std::ostream &out, Form *ref)
{
    if (ref->getSigned() == true)
        out << " signed " << ref->getFormName() << std::endl;
    else
        out << " couldn't sign " << ref->getFormName() << " because they got ratioed\n";
    return out;
}

Form::~Form()
{
    std::cout << "Form destructor called\n";
}