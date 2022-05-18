// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/15 12:27:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <memory>

int main() {
    try {
        Bureaucrat Leonidas("Leonidas", 1);
        std::cout << Leonidas << std::endl;
        try {
            Leonidas.incrementGrade(1);
        }
        catch(std::exception& e){
            std::cerr << "Failed to promote bureaucrat Leonidas: " << e.what() << std::endl;
        }
    }
    catch (std::exception & e){
        std::cerr << "Failed to create bureaucrat Leonidas: " << e.what() << std::endl;

    }


    try {
        Bureaucrat Alexandros("Alexandros", 2);
        std::cout << Alexandros << std::endl;
        try{
            Alexandros.decrementGrade(22);
            std::cout << Alexandros << std::endl;
            Alexandros.decrementGrade(150);
        }
        catch (std::exception& e){
            std::cerr << "Failed to demote bureaucrat Alexandros: " << e.what() << std::endl;
        }
    }
    catch(std::exception& e){
        std::cerr << "\"Failed to create bureaucrat Alexandros: \"" << std::endl;
    }
    std::cout << "Too many GODS 👑" << std::endl;


    try{
        Bureaucrat Elon("Elon", 0);
    }
    catch (std::exception& e){
        std::cerr << "Failed to create bureaucrat Elon: " << e.what() << std::endl;
    }

    try{
        Bureaucrat Negro("Negro", 300);
    }
    catch (std::exception& e){
        std::cerr << "Failed to create bureaucrat Negro: " << e.what() << std::endl;
    }
   return(0);
}