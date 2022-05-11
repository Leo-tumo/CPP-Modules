// ********************************************************************** //
//                                                                        //
//             ScavTrap.hpp                                               //
//             Created: 2022/05/10 21:04:24 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include "ClapTrap.hpp"
# define MG "\033[1;35m"

class ScavTrap: public ClapTrap
{
private:
    ScavTrap();
public:
    ScavTrap(std::string const & name);
    ScavTrap( const ScavTrap & src );
    ScavTrap & operator = (const ScavTrap &src);

    ~ScavTrap();
    void	attack(std::string const & target);
    void	guardGate();
};

#endif //EX01_SCAVTRAP_HPP
