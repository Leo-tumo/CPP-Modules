// ********************************************************************** //
//                                                                        //
//             newZombie.cpp                                              //
//             Created: 2022/05/06 21:05:56 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
	Zombie *zom;

	zom = new Zombie(name);
	return (zom);
}
