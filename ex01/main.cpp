#include "Bureaucrat.hpp"
#include "Form.hpp"
int main () {

try
{
  Bureaucrat r = Bureaucrat("jobar", 150);
  r.increment_grade(2);
  std::cout << r;
  r.decrement_grade(2);
  std::cout << r;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}

try
{
  Bureaucrat b = Bureaucrat("theidire", 151);
  b.increment_grade(2);
  std::cout << b;
  b.decrement_grade(2);
  std::cout << b;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}

try
{
  Bureaucrat c = Bureaucrat("Pierrot", 0);
  c.increment_grade(2);
  std::cout << c;
  c.decrement_grade(2);
  std::cout << c;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}

try
{
  Bureaucrat r = Bureaucrat("jobar", 150);
  Form a = Form("tu connais", 150, 12);
  a.beSigned(r);
  std::cout << a;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}

try
{
  Bureaucrat r = Bureaucrat("jobar", 150);
  Form a = Form("tu connais", 10, 12);
  a.signForm(r);
  std::cout << a;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}
// std::string name = "aex";
  
//   try
//   {
//     if (name != "alex")
//       throw 20;
//   }
//   catch (int e)
//   {
//     std::cout << "An exception occurred. Exception Nr. " << e << '\n';
//   }
  return 0;
}