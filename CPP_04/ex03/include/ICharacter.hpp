// ********************************************************************** //
//                                                                        //
//             ICharacter.hpp                                             //
//             Created: 2022/05/15 12:23:50 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class ICharacter
{
	public:
		virtual	~ICharacter() {};
		virtual	std::string const & getName() const = 0;
		virtual	void equip( AMateria* m ) = 0;
		virtual	void unequip( int idx ) = 0;
		virtual	void use( int idx, ICharacter& target ) = 0;
};

#endif
