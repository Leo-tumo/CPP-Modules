// ********************************************************************** //
//                                                                        //
//             Intern.cpp                                                 //
//             Created: 2022/05/18 15:38:29 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern & src ) { *this = src; }

Intern::~Intern() {}

Intern & Intern::operator=( const Intern & rhs )
{
    if (this == &rhs)
        return (*this);
    return (*this);
}
union action{
	Form *(*f)(std::string, std::string);
};

const char* Intern::FormNotFound::what() const throw(){
    return ("Form Not Found!");
}

Form*	Intern::ShrubberyCreation( std::string target )
{ return (new ShrubberyCreationForm(target));}

Form* Intern::RobotomyRequest( std::string target )
{ return (new RobotomyRequestForm(target));}

Form* Intern::PresidentialPardon( std::string target )
{ return (new PresidentialPardonForm(target));}

Form*	Intern::makeForm( std::string type, std::string target )
{
    std::string	Forms[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
    Form* (Intern::*form[]) (std::string target) = {
        form[0] = &Intern::ShrubberyCreation,
        form[1] = &Intern::RobotomyRequest,
        form[2] = &Intern::PresidentialPardon
    };
    for(int i = 0; i < 3; i++)
        if(Forms[i] == type){
            std::cout << "Intern creates " << type << std::endl;
            return ((this->*form[i])(target));
        }
    throw Intern::FormNotFound();
}
