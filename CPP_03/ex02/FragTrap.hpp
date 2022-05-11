// ********************************************************************** //
//                                                                        //
//             FragTrap.hpp                                               //
//             Created: 2022/05/10 21:04:24 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP
#include "ClapTrap.hpp"
# define JJ "\033[1;31m"

class FragTrap: public ClapTrap
{
private:
    FragTrap();
public:
    FragTrap(std::string const & name);
    FragTrap( const FragTrap & src );
    FragTrap & operator = (const FragTrap &src);
    ~FragTrap();
	
	void highFivesGuys(void);
};

#endif //EX02_FRAGTRAP_HPP
