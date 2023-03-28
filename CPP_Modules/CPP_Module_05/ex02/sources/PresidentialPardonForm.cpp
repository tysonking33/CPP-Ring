#include "../includes/PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << "Default PresidentialPardonForm constructor called\n";
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PF1) : AForm("PresidentialPardonForm", 25, 5), target(PF1.getTarget())
{
    std::cout << "PresidentialPardonForm Copy Constructor called!\n";

    *this = PF1;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string newTarget) : AForm("PresidentialPardonForm", 25, 5), target(newTarget)
{
    std::cout << "Aform constructor called\n";
};

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::pardonMe()
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox!!!\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed\n";
}