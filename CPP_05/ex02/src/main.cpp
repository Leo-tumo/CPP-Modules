// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/15 12:27:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include <iostream>
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Leo("Leo", 111);
    ShrubberyCreationForm snoop("home");
    RobotomyRequestForm     cyborg("Cyborg");
    PresidentialPardonForm  arthur("Arthur Dent");

    Leo.signForm(snoop);
    try {
        snoop.execute(Leo);
    }
    catch(std::exception & e){
        std::cerr << Leo.getName() << " Execution failed: " << snoop.getTarget() <<  e.what() << std::endl;
    }

    try{
        Leo.signForm(cyborg);
    }
    catch(std::exception & e){
        std::cerr << Leo.getName() << " can't sign the form: " << cyborg.getTarget() <<  e.what() << std::endl;
    }
    Leo.incrementGrade(70);
    std::cout << Leo << std::endl;
    try{
        Leo.signForm(cyborg);
    }
    catch(std::exception & e){
        std::cerr << Leo.getName() << " can't sign the form: " << cyborg.getTarget() <<  e.what() << std::endl;
    }
    try {
        cyborg.execute(Leo);
    }
    catch(std::exception & e){
        std::cerr << Leo.getName() << " Execution failed: " << cyborg.getTarget() <<  e.what() << std::endl;
    }
    try {
        Leo.incrementGrade(38);
        arthur.beSigned(Leo);
        Leo.executeForm(arthur);
        arthur.execute(Leo);
    }
    catch(std::exception & e){
        std::cerr << Leo.getName() << " Execution failed: " << cyborg.getTarget() <<  e.what() << std::endl;
    }

}
