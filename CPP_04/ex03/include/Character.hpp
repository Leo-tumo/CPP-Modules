// ********************************************************************** //
//                                                                        //
//             Character.hpp                                              //
//             Created: 2022/05/15 12:23:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria**	_inventory;
	public:
		Character();
		Character( std::string Name );
		Character( const Character &src );
		~Character();
		Character &	operator = ( const Character &rhs );
		std::string	const & getName() const;
		void		equip( AMateria* m );
		void		unequip( int idx );
		void		use( int idx, ICharacter& target );
};

#endif
