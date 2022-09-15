#pragma once 
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{

public:

    Bureaucrat(void);
    Bureaucrat(std::string const & name, int grade);
    Bureaucrat(Bureaucrat const &);
    ~Bureaucrat(void);
    Bureaucrat &operator=(const Bureaucrat&);
    
    int         getGrade(void) const;
    std::string getName(void) const;
    void        increment_grade(int how);
    void        decrement_grade(int how);
    
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade to high !";
        }
    };

    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() 
        {
            return "grade to low !";
        }
    };

private:

    std::string const _name;
    int               _grade; //1 le plus eleve 150 le plus bas

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);