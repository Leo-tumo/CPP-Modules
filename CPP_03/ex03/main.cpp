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
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap thanatos("THANATOS");
	DiamondTrap chiron("CHIRON");

	thanatos.getStats();
	thanatos.attack("CHIRON");
	chiron.takeDamage(30);
	chiron.attack("THANATOS");	
	thanatos.takeDamage(30);
	thanatos.whoAmI();
	chiron.whoAmI();
	return (0);
}
