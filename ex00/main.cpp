#include "Bureaucrat.hpp"
int main () {

try
{
  Bureaucrat a = Bureaucrat("jobar", 150);
  a.increment_grade(2);
  std::cout << a;
  a.decrement_grade(2);
  std::cout << a;

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
  Bureaucrat d = Bureaucrat("tu connais", 150);
  d.increment_grade(2);
  std::cout << d;
  d.decrement_grade(3);
  std::cout << d;

}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}
std::string name = "aex";
  
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