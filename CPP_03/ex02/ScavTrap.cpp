// ********************************************************************** //
//                                                                        //
//             ScavTrap.cpp                                               //
//             Created: 2022/05/10 21:04:30 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << MG << "ScavTrap::" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
    this->_name = name;
    std::cout << MG << "ScavTrap:: " << _name << " is summoned 🦖" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap() { *this = src; }

ScavTrap &ScavTrap::operator=(ScavTrap const &other){
    ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::attack(std::string const &target){
    if(this->_energyPoints && this->_hitPoints) {
        std::cout << MG << "ScavTrap:: " << this->_name << " attacks "
                  << target << ", causing " << this->_damage
                  << " points of damage! 🔫" << std::endl;
        this->_energyPoints -= 1;
    } else {
        if(this->_hitPoints == 0)
            std::cout << CYAN << "ScavTrap:: " << this->_name << " is dead 🪦🪦🪦" << std::endl;
        else
            std::cout << CYAN << "ScavTrap:: " << this->_name << " is out of energy 🪫" << std::endl;
    }
}

void ScavTrap::guardGate(){
    if(this->_energyPoints && this->_hitPoints)
        std::cout << MG << "ScavTrap:: " << _name << ": Guard keeper mode is active 💂🏻" << std::endl;
    else {
        if(this->_hitPoints == 0)
            std::cout << MG << "Guard mode failed... ScavTrap:: " << this->_name << " is dead 🪦🪦🪦" << std::endl;
        else
            std::cout << MG << "Guard mode failed... ScavTrap:: " << this->_name << " is out of energy 🪫" << std::endl;
    }
}

ScavTrap::~ScavTrap(){
    if (this->_hitPoints == 0)
        std::cout << MG << "ScavTrap:: " << this->_name << " was demolished 💩" << std::endl;
    else
        std::cout << MG << "ScavTrap:: " << this->_name << " took his 🎾 & went home." << std::endl;
}
