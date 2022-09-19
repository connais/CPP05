#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:

    ShrubberyCreationForm(std::string const & target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);

    virtual void execute(Bureaucrat const & executor) const;
    
    std::string    getTarget(void) const;
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
