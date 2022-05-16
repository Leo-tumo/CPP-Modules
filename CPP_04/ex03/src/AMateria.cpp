// ********************************************************************** //
//                                                                        //
//             AMateria.cpp                                               //
//             Created: 2022/05/15 12:24:41 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria(){
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( std::string const &type ){
	this->_type = type;
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( const AMateria &src ) { *this = src; }

AMateria::~AMateria(){
	std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria & AMateria::operator=( const AMateria & src ){
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const { return (this->_type); }

void	AMateria::use( ICharacter& target ){
	if (this->_type == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
