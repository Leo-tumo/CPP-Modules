// ********************************************************************** //
//                                                                        //
//             Ice.hpp                                                    //
//             Created: 2022/05/15 12:24:03 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice( const Ice &src );
		virtual ~Ice();
		Ice &		operator = ( const Ice &rhs );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif
