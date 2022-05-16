// ********************************************************************** //
//                                                                        //
//             AMateria.hpp                                               //
//             Created: 2022/05/15 12:22:31 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

#include <iostream>
#include <string>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &src );
		virtual		~AMateria();
		AMateria &	operator = ( const AMateria &rhs );
		std::string	const & getType() const;
		virtual		AMateria* clone() const = 0;
		virtual		void use( ICharacter& target );

};


#endif
