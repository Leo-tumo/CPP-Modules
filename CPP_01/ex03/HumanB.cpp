// ********************************************************************** //
//                                                                        //
//             HumanB.cpp                                                 //
//             Created: 2022/05/06 20:48:09 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){}

HumanB::~HumanB(){}

void	HumanB::attack(){
    if(_weapon != NULL)
        std::cout << _name <<" attacks with their " << _weapon->getType() << std::endl;
}

std::string	HumanB::getName() const{
    return _name;
}
void	HumanB::setName(std::string name){
    _name = name;
}

void	HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}
