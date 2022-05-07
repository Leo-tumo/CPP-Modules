// ********************************************************************** //
//                                                                        //
//             Karen.hpp                                                  //
//             Created: 2022/05/06 20:50:12 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP

#include <iostream>
#include <string>

# define WHITE "\001\033[0m\002"
# define RED "\001\033[1;31m\002"
# define CYAN "\001\033[1;36m\002"
# define GREEN "\001\033[1;92m\002"
# define MAGENTA "\001\033[1;35m\002"

class Karen
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain( std::string level );
};

#endif
