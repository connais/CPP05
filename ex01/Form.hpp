#pragma once
#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{

public:

    Form(std::string const & name, int sign_grade, int exec_grade);
    Form(Form const &src);
    ~Form(void);
    Form &operator=(const Form&);

    bool get_signed(void) const;
    int get_sign_grade(void) const;
    int get_exec_grade(void) const;
    void beSigned(Bureaucrat &bureau);
    void signForm(Bureaucrat &bureau);
    
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade insufficient !";
        }
    };

private:

    std::string _name;
    bool        _signed;
    int const _sign_grade;
    int const _exec_grade;

};

std::ostream& operator<<(std::ostream& os, const Form& dt);
