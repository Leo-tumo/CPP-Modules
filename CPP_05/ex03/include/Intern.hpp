// ********************************************************************** //
//                                                                        //
//             Intern.hpp                                                 //
//             Created: 2022/05/18 15:38:49 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern( const Intern & src );
    ~Intern();
    Intern & operator = ( const Intern & rhs );
    class FormNotFound: public std::exception
    {
        const char * what() const throw();
    };
    Form*	ShrubberyCreation( std::string target );
    Form*	RobotomyRequest( std::string target );
    Form*	PresidentialPardon( std::string target );
    Form*	makeForm( std::string Type, std::string target );
};

#endif //EX03_INTERN_HPP
