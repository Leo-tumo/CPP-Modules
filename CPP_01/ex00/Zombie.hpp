// ********************************************************************** //
//                                                                        //
//             Zombie.hpp                                                 //
//             Created: 2022/05/06 21:05:03 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

# ifndef EX_00_ZOMBIE_HPP
# define EX_00_ZOMBIE_HPP

# include <iostream>
# include <string>
# define RED "\001\033[1;31m\002"
# define CYAN "\001\033[1;36m\002"

class Zombie
{
	private:
        Zombie();
        std::string	_name;
	public:
        Zombie(std::string name);
		~Zombie();
		void    announce(void);
};

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

#endif

