#include "Form.hpp"

Form::Form(std::string const & name, int sign_grade, int exec_grade): _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    std::cout << "assignment Form constructor" << std::endl;
    if (_sign_grade < 1 || _exec_grade < 1)
        throw Form::GradeTooLowException();
    else if (_sign_grade > 150 || _exec_grade > 150)
        throw Form::GradeTooHighException();
    return ;
}

Form::Form(Form const & copy) : _name(copy.getName()), _signed(false), _sign_grade(copy.get_sign_grade()), _exec_grade(get_exec_grade())
{
    *this = copy;
    std::cout << "copy Form constructor" << std::endl;
    return ;
}

Form::~Form(void)
{
    std::cout << "default Form destructor" << std::endl;
    return ;
}

Form& Form::operator=(Form const & fo)
{
    if (this == &fo)
        return (*this);
    _name = fo.getName();
    _signed = fo.get_signed();
    return (*this);
}

bool Form::get_signed(void) const
{
    return (_signed);
}

int Form::get_sign_grade(void) const
{
    return (_sign_grade);
}

int Form::get_exec_grade(void) const
{
    return (_exec_grade);
}

void Form::beSigned(Bureaucrat &bureau)
{
    if (_sign_grade >= bureau.getGrade())
          _signed = true;
    else
        throw Form::GradeTooLowException();
}

void Form::signForm(Bureaucrat &bureau)
{
    if (_signed)
        std::cout << bureau.getName() << " signed " << getName() << std::endl; 
    else
        std::cout << bureau.getName() << " couldn't sign " << getName() << "because he sleep" << std::endl; 
}


std::ostream& operator<<(std::ostream& os, const Form& fo)
{
    if (fo.get_signed())
    {
        os << "formular : "<< fo.getName() << 
        " is signed, only grade " << fo.get_sign_grade() 
        << " can sign it and only grade " << fo.get_exec_grade() 
        << " can execute it" << std::endl;
    }
    else
        os << "formular : "<< fo.getName() << 
        " isn't signed, only grade " << fo.get_sign_grade() 
        << " can sign it and only grade " << fo.get_exec_grade() 
        << " can execute it" << std::endl;
    return os;
}