// ********************************************************************** //
//                                                                        //
//             Cure.cpp                                                   //
//             Created: 2022/05/15 12:25:07 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"

Cure::Cure(): AMateria("cure"){
	std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure( const Cure &src ) { *this = src; }

Cure::~Cure(){
	std::cout << "Cure Destructor Called" << std::endl;
}

Cure & Cure::operator=( const Cure & rhs ){
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const{
	return (new Cure());
}

void	Cure::use( ICharacter& target ){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
