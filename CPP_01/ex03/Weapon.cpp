// ********************************************************************** //
//                                                                        //
//             Weapon.cpp                                                 //
//             Created: 2022/05/06 20:47:27 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon(){}

std::string Weapon::getType() const{
    return _type;
}
void    Weapon::setType(std::string new_one){
    this->_type = new_one;
}

