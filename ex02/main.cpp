#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () 
{

  try
  {
    Bureaucrat e = Bureaucrat("jobar", 1);
    PresidentialPardonForm r = PresidentialPardonForm("Booba");
    r.beSigned(e);
    e.executeForm(r);
    r.execute(e);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  try
  {
    Bureaucrat e = Bureaucrat("jobar", 10);
    RobotomyRequestForm r = RobotomyRequestForm("Booba");
    r.beSigned(e);
    e.executeForm(r);
    r.execute(e);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  try
  {
    Bureaucrat e = Bureaucrat("jobar", 10);
    ShrubberyCreationForm r = ShrubberyCreationForm("Booba");
    r.beSigned(e);
    e.executeForm(r);
    r.execute(e);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  return 0;
}