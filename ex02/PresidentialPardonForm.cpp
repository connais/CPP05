#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "default PresidentialPardonForm constructor" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5), _target("")
{
    *this = src;
    std::cout << "copy PresidentialPardonForm constructor" << std::endl;
    return ;
}

std::string    PresidentialPardonForm::getTarget()
{
    return (_target);
}


PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "default PresidentialPardonForm destructor" << std::endl;
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
    (void) src;
    return (*this);
}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    execGood(executor);
    std::cout << _target << " was pardoned by Zaphod Beeblebrox" << std::endl;
    return ;
}