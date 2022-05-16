// ********************************************************************** //
//                                                                        //
//             Character.cpp                                              //
//             Created: 2022/05/15 12:26:11 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Character.hpp"

Character::Character(){
	this->_name = "Unknown";
	this->_inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	std::cout << this->_name << " Constructor Called" << std::endl;
}

Character::Character( std::string Name ){
	this->_name = Name;
	this->_inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	std::cout << this->_name << " Constructor Called" << std::endl;
}

Character::Character( const Character &src ) { *this = src; }

Character::~Character(){
	delete [] this->_inventory;
	std::cout << this->_name << " Destructor Called" << std::endl;
}

Character & Character::operator=( const Character &rhs ){
	if (this == &rhs)
		return (*this);
	if (this->_inventory == nullptr)
		delete [] this->_inventory;
	this->_inventory = new AMateria*[4];
	this->_name = rhs._name;
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const { return (this->_name); }

void	Character::equip( AMateria* m ){
	if (m == nullptr)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip( int idx ){
	if (idx >= 4 || idx < 0)
		return ;
	this->_inventory[idx] = nullptr;
}

void	Character::use( int idx, ICharacter& target ){
	if (this->_inventory[idx] == nullptr || idx < 0 || idx >= 4)
	{
		std::cout << this->_name << " has no materia in index "
		<< idx << std::endl;
		return;
	}
	std::cout << this->_name << ": ";
	this->_inventory[idx]->use(target);
}
