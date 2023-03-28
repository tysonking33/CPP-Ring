#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "../includes/AForm.h"
#include "../includes/Bureaucrat.h"
#include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public AForm{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &RF1);

        RobotomyRequestForm(const std::string newTarget);
        std::string getTarget() const;
        std::string drillNoize();
        void robotomize();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();
};

#endif