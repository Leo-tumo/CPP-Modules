// ********************************************************************** //
//                                                                        //
//             ClapTrap.cpp                                               //
//             Created: 2022/05/10 18:46:50 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->_name = "Unknown";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_damage = 0;
    std::cout << CYAN << __func__ << " " << _name << " is summoned 🤡" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name){
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_damage = 0;
    std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << _name << " is summoned 🤖" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
    *this = other;
    std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << _name << "is copied 👥" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_damage = other._damage;
    std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << _name << "is 👀 assigned...." << std::endl;
    return (*this);
}

void ClapTrap::attack(std::string const &target){
    if(this->_energyPoints && this->_hitPoints) {
        std::cout << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " attacks "
                  << target << ", causing " << this->_damage
                  << " points of damage! 🔫" << std::endl;
        this->_energyPoints -= 1;
    } else {
        if(this->_hitPoints == 0)
            std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " is dead 🪦🪦🪦" << std::endl;
        else
            std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " is out of energy 🪫" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << _name << " took " << amount << " damage! 🤕" << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints <= 0)
        this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->_energyPoints && this->_hitPoints) {
        std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << _name << " got repaired with " << amount << " points! 💊" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
    } else {
        if(this->_hitPoints == 0)
            std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " is dead 🪦" << std::endl;
        else
            std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " is out of energy 🪫" << std::endl;
    }
}

ClapTrap::~ClapTrap(){
    if (this->_hitPoints == 0)
        std::cout << CYAN << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " is Dead! 💀" << std::endl;
    else
        std::cout << ((std::string)(typeid(*this).name())).erase(0,1) << " " << this->_name << " took his 🏀 & went home." << std::endl;
}

