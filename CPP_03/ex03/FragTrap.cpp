// ********************************************************************** //
//                                                                        //
//             FragTrap.cpp                                               //
//             Created: 2022/05/10 21:04:30 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << JJ << "FragTrap::" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    this->_name = name;
    std::cout << JJ << "FragTrap:: " << _name << " is summoned π¦" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap() { *this = src; }

FragTrap &FragTrap::operator=(FragTrap const &other){
    ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << JJ << "βββββββββββ highFivesGuys ββββββββββββββ" << std::endl;
}

FragTrap::~FragTrap(){
    if (this->_hitPoints == 0)
        std::cout << JJ << "FragTrap:: " << this->_name << " was murdered π€Ίπ€Ίπ€Ί" << std::endl;
    else
        std::cout << JJ << "FragTrap:: " << this->_name << " took his βοΈ & went home." << std::endl;
}
