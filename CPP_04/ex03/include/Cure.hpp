// ********************************************************************** //
//                                                                        //
//             Cure.hpp                                                   //
//             Created: 2022/05/15 12:22:54 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure( const Cure &src );
		virtual ~Cure();
		Cure & operator = ( const Cure &rhs );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif
