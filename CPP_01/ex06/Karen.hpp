// ********************************************************************** //
//                                                                        //
//             Karen.hpp                                                  //
//             Created: 2022/05/06 20:50:12 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX06_KAREN_HPP
#define EX06_KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain(std::string level);
};

#endif
