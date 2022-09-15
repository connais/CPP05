#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "default bureaucrat constructor" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
    std::cout << "assignment bureaucrat constructor" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
    *this = copy;
    std::cout << "copy bureaucrat constructor" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "default bureaucrat destructor" << std::endl;
    return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & bureau)
{
    if (this == &bureau)
        return (*this);
    _grade = bureau._grade;
    return (*this);
}

int         Bureaucrat::getGrade(void) const
{
    return (_grade);
}
std::string Bureaucrat::getName(void) const
{
    return (_name);
}
void        Bureaucrat::increment_grade(int how)
{
    if (this->_grade - how >= 1)
        this->_grade -= how;
    else
        throw Bureaucrat::GradeTooLowException();
    return ;
}

void        Bureaucrat::decrement_grade(int how)
{
    if (this->_grade + how <= 150)
        this->_grade += how;
    else
        throw Bureaucrat::GradeTooHighException();
    return ;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu)
{
    os << bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
    return os;
}
