// ********************************************************************** //
//                                                                        //
//             Zombie.cpp                                                 //
//             Created: 2022/05/06 21:05:23 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name): _name(name){};

Zombie::~Zombie(){
	std::cout << RED << this-> _name << " is destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << CYAN << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
