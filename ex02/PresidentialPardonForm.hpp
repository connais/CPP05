#pragma once 
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
public:

    PresidentialPardonForm(std::string const & target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm &operator=(const PresidentialPardonForm&);

  //  using Form::execute;
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
