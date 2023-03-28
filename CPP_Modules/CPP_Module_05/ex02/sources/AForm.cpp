#include "../includes/AForm.h"

AForm::AForm(): formName("Default form"), isSigned(false), isExecuted(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Default Aform constructor called\n";
}

AForm::AForm(std::string const &newFormName, int const newGradeToSign, int const newGradeToExecute)
    : formName(newFormName), isSigned(false), isExecuted(false), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute) {
        std::cout << "AForm constructor called\n";
}

AForm::AForm(const AForm &F1) : formName(F1.formName), isSigned(F1.isSigned), gradeToSign(F1.gradeToSign), gradeToExecute(F1.gradeToExecute)
{
    std::cout << "Copy Aform constructor called\n";
}

const std::string AForm::getFormName() const{
    return formName;
}

bool AForm::getSigned() const{
    return isSigned;
}

void AForm::beSigned(Bureaucrat &B){
    if (B.getGrade() <= gradeToSign)
        this->isSigned = true;
}

void AForm::beExecuted(Bureaucrat &B){
    if (B.getGrade() <= gradeToExecute)
        this->isSigned = true;
}

bool AForm::getExecuted() const{
    return isExecuted;
}

void AForm::GradeTooHighException(Bureaucrat &B){
    try {
        if (B.getGrade() <= gradeToExecute)
            std::cout << "Grade high enough to execute Form\n";
        else if (B.getGrade() <= gradeToSign)
            std::cout << "Grade high enough to sign Form\n";
        else
            throw("grade lower than form requirements\n");
    }
    catch(std::string error){
        std::cout << error;
    }
}

void AForm::GradeTooLowException(Bureaucrat &B){
    try {
        if (B.getGrade() > gradeToSign)
        {
            throw("grade lower than form requirements\n");
        }
        else
            std::cout << "Grade high enough for Form\n";
    }
    catch(std::string error){
        std::cout << error;
    }
}

void AForm::execute(Bureaucrat const & executor) const{
    try{
        if (executor.getGrade() <= gradeToExecute){
            std::cout << "Form has bean executed!!!\n";
        }
        else{
            throw ("failed to execute form!!! :(\n");
        }
    }
    catch(char const *error){
        std::cout << error;
    }
}

AForm &AForm::operator=(const AForm &src)
{
    std::cout << "AForm Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}


std::ostream &operator<<(std::ostream &out, AForm *ref){
    if (ref->getSigned() == true)
        out << " signed " << ref->getFormName() << std::endl;
    else
        out << " couldn't sign " << ref->getFormName() << " because they got ratioed\n";
    return out;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called\n";
}