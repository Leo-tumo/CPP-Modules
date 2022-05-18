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

int main()
{
    try{
        Form test("bed form", -10, 180);
        std::cout << test.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << "Can't create form 'test': " << e.what() << std::endl;
    }
    try{
        Form		transfer("Transfer", 1, 5);
        Bureaucrat	coach("Coach", 1);

        std::cout << transfer << std::endl;
        coach.signForm(transfer);
        transfer.beSigned(coach);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        Form		treat("Free Whiskey", 5, 10);
        Bureaucrat	slave("Slavik", 77);

        std::cout << treat << std::endl;

        slave.signForm(treat);
        treat.beSigned(slave);
    }
    catch(const std::exception& e){
        std::cerr << "Can't sign form 'treat': " << e.what() << std::endl;
    }
}
