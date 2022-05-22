// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/21 16:47:51 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Convert.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "required one argument" << std::endl;
        return (1);
    }
    Convert Convert(av[1]);

    std::cout << Convert;
    return (0);
}

