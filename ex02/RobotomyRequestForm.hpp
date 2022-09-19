#pragma once
#include "Form.hpp"
#include <cstdlib>


class RobotomyRequestForm : public Form
{
public:

    RobotomyRequestForm(std::string const & target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(const RobotomyRequestForm&);

    std::string    getTarget();
    virtual void execute(Bureaucrat const & executor) const;
    
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade insufficient !";
        }
    };

private:

    std::string const _target;
};