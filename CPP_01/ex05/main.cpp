// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/06 20:45:24 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Karen.hpp"

int main(int ac, char **av)
{
    {
        Karen karen;
        if (ac != 1)
            karen.complain(av[1]);
        else
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    {
        Karen karen = Karen();
        void	(Karen::*test_ptr)( std::string str );

        karen.complain("debug");
        karen.complain("DEBUG");
        karen.complain("INFO");
        karen.complain("WARNING");
        karen.complain("ERROR");
        test_ptr = &Karen::complain;
        (karen.*test_ptr)("DEBUG");
        (karen.*test_ptr)("what");
    }
}