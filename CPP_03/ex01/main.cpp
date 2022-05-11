// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/10 18:43:45 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap xristos("Xristos");

    xristos.beRepaired(10);
    ScavTrap vasos("Vasos");
    xristos.attack("Vasos");

    vasos.takeDamage(10);
    vasos.attack("Xristos");
    xristos.takeDamage(9);
    vasos.beRepaired(3);
    vasos.guardGate();

    return (0);
}
