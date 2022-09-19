#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "default ShrubberyCreationForm constructor" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), _target("")
{
    *this = src;
    std::cout << "copy ShrubberyCreationForm constructor" << std::endl;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "default ShrubberyCreationForm destructor" << std::endl;
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
    (void) src;
    return (*this);
}

std::string    ShrubberyCreationForm::getTarget(void) const
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    execGood(executor);
    std::string str = getTarget() + "_shruberry";

    std::ofstream outfile (str.c_str());

    outfile << "                (    ) )    ()" << std::endl;
    outfile << "              (  )  )    @  )(  )" << std::endl;
    outfile << "          ( ) )(/ (  (    )  ) ) (" << std::endl;
    outfile << "         /( (  (  )   @    ))  )   )" << std::endl;
    outfile << "       ((     (   )(@   )  )   (   )  )" << std::endl;
    outfile << "     ((/  (  (   )   (   @  ) (  () )  )" << std::endl;
    outfile << "    ( (  ( (@)   ((    (     ) ((@ )    )_" << std::endl;
    outfile << "   ( (  )    (  )   (@ ) <`)~   )   ) (   )" << std::endl;
    outfile << "  (  (  @(  (   )@(     ( (   )  )   ) ) ( )" << std::endl;
    outfile << "  ( (  (   ) (  )   (  ))  ^ ) @)(   )   )  )" << std::endl;
    outfile << " ( (  ( ) ) ( @  (   ( ) ( )  )   ) ) @)) ( )" << std::endl;
    outfile << "  (  (   (  (   (@ ( ) ( @    )  ) (  )  )   )" << std::endl;
    outfile << " ( (  ( (  (  )     (@  )  ) )   )   )  ( ( )" << std::endl;
    outfile << "  ((  (  @)(    (  (   )   ) @  )  (  (  (  )" << std::endl;
    outfile << "   ( ((  ( (  (( ( ( (||  ) ) ) ) )) @) )   )" << std::endl;
    outfile << "   ((  ) (  ) ( )((|)||)|(|//  ( )  )    ))" << std::endl;
    outfile << "        (  ( )    ||||||||(|  )  (   )" << std::endl;
    outfile << "             (  ( ||||||||||    (" << std::endl;
    outfile << "                  |||||||0||" << std::endl;
    outfile << "                  ||||||||||" << std::endl;
    outfile << "                  ||||||||||" << std::endl;
    outfile << "                  ||||||||||" << std::endl;
    outfile << "                  ||||||||||" << std::endl;
    outfile << "            @    _||||||||||_ " << std::endl;
    outfile << "-------------------------------------------" << std::endl;
    outfile.close();
    return ;
}