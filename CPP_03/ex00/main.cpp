// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/10 18:43:45 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap nikos("Nikos");
    ClapTrap xristos("Xristos");
	ClapTrap	nicky = ClapTrap("nicky");
	nicky.attack("cardi B");

    xristos.beRepaired(10);

    nikos.attack("Xristos");
    xristos.takeDamage(30);
    nikos.beRepaired(10);
    xristos.attack("Nikos");
    nikos.takeDamage(0);
    return (0);
}
