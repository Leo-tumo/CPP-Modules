// ********************************************************************** //
//                                                                        //
//             DiamondTrap.cpp                                            //
//             Created: 2022/05/10 23:49:30 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "Unknown";
	std::cout << WD << "DiamondTrap:: <<< " << this->_name << " >>> is summoned 💎" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"){
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;
	std::cout << WD << "DiamondTrap:: <<< " << this->_name << " >>> is summoned 💎" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src ): ClapTrap(src), ScavTrap(src), FragTrap(src) {
	*this = src; 
	}

DiamondTrap::~DiamondTrap(){
	if (this->_hitPoints == 0)
		std::cout << WD << "DiamondTrap:: <<< " << this->_name << " > is DESTROYED 💠💠💠!" << std::endl;
	else
		std::cout << WD << "DiamondTrap:: " << this->_name << " took her 💍 & went home." << std::endl;
}

DiamondTrap & DiamondTrap::operator=( const DiamondTrap &src )
{
	if (this == &src)
		return *this;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_damage = src._damage;
	return *this;
}

void	DiamondTrap::attack( std::string const & target ) { ScavTrap::attack(target); }

void	DiamondTrap::whoAmI(){
	std::cout << WD << "DiamondTrap: My DiamondTrap Name is " << this->_name << std::endl;
	std::cout << WD << "DiamondTrap: My ClapTrap Name is " << this->ClapTrap::_name << std::endl;
}

void	DiamondTrap::getStats() const{
	std::cout << "NAME: " << _name << "\t\tHP: " << _hitPoints
	<< "\t\t⚡️: " << _energyPoints << "\t\tDMG: " <<
	_damage << std::endl;
}
