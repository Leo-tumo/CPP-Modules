// ********************************************************************** //
//                                                                        //
//             MateriaSource.hpp                                          //
//             Created: 2022/05/15 12:23:19 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int			_size;
		AMateria**	_sources;
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		~MateriaSource();
		MateriaSource &	operator = ( const MateriaSource &rhs );
		void			learnMateria( AMateria*);
		AMateria*		createMateria( std::string const & type );
};

#endif
