// ********************************************************************** //
//                                                                        //
//             Ice.cpp                                                    //
//             Created: 2022/05/15 12:26:41 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"


Ice::Ice(): AMateria("ice"){
	std::cout << "Ice Constructor Called" << std::endl;
}

Ice::Ice( const Ice &src ) { *this = src; }

Ice::~Ice(){
	std::cout << "Ice Destructor Called" << std::endl;
}

Ice & Ice::operator=( const Ice & rhs ){
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const{
	return (new Ice());
}

void	Ice::use( ICharacter& target ){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
