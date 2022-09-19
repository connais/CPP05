#pragma once
#include "Bureaucrat.hpp"
#include <string>
class Bureaucrat;

class Form
{

public:

    Form(std::string const & name, int sign_grade, int exec_grade);
    Form(Form const &src);
    virtual ~Form(void) = 0;
    Form &operator=(const Form&);

    std::string getName(void) const;
    bool get_signed(void) const;
    int get_sign_grade(void) const;
    int get_exec_grade(void) const;
    void beSigned(Bureaucrat &bureau);
    void signForm(Bureaucrat &bureau);
    void execGood(Bureaucrat const & executor) const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade insufficient !";
        }
    };

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade to high !";
        }
    };

    class NotSignedException : public std::exception
    {
        const char* what() const throw() 
        {
            return "you can't execute this formular because isn't signed !";
        }
    };

private:

    std::string const _name;
    bool        _signed;
    int const _sign_grade;
    int const _exec_grade;

};

std::ostream& operator<<(std::ostream& os, const Form& dt);
