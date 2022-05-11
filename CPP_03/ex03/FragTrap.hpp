// ********************************************************************** //
//                                                                        //
//             FragTrap.hpp                                               //
//             Created: 2022/05/10 21:04:24 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP
#include "ClapTrap.hpp"
# define JJ "\033[1;31m"

class FragTrap: virtual public ClapTrap
{
protected:
    FragTrap();
public:
    FragTrap(std::string const & name);
    FragTrap( const FragTrap & src );
    FragTrap & operator = (const FragTrap &src);

    ~FragTrap();
	void highFivesGuys(void);
    void	guardGate();
};

#endif //EX03_FRAGTRAP_HPP
