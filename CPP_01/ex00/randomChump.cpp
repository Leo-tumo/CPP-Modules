// ********************************************************************** //
//                                                                        //
//             randomChump.cpp                                            //
//             Created: 2022/05/06 21:05:43 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie  zom(name);
	zom.announce();
}
