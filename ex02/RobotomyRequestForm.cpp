#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "default RobotomyRequestForm constructor" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45), _target("")
{
    *this = src;
    std::cout << "copy RobotomyRequestForm constructor" << std::endl;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "default RobotomyRequestForm destructor" << std::endl;
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
    (void) src;
    return (*this);
}

std::string RobotomyRequestForm::getTarget()
{
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    execGood(executor);
    srand(time(0));
    int randomval = rand() % 2;
    std::cout << "bbbzzzzzzbzzzzzzvrrrrrrrrvbzzzzzz" << std::endl;
    if (randomval == 1)
        std::cout << _target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << "Operation failed" << std::endl;
    return ;
}