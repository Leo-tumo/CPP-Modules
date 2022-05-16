// ********************************************************************** //
//                                                                        //
//             IMateriaSource.hpp                                         //
//             Created: 2022/05/15 12:23:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		virtual	void learnMateria(AMateria*) = 0;
		virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif
