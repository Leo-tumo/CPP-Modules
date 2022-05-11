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
#include "FragTrap.hpp"

int main()
{
	ClapTrap nancy = ClapTrap("dimitra");
	ScavTrap	giorgos("George");
	FragTrap	romina("Romina");

	romina.highFivesGuys();
	giorgos.guardGate();
	romina.beRepaired(11);
	romina.takeDamage(130);
	romina.highFivesGuys();
	romina.beRepaired(14);
	romina.attack("trashcan");
	

    return (0);
}
