// ********************************************************************** //
//                                                                        //
//             ClapTrap.hpp                                               //
//             Created: 2022/05/10 18:46:43 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP
#include <iostream>
#define CYAN "\033[1;36m"

class ClapTrap
{
private:
    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _damage;

public:
    ClapTrap();
    ClapTrap(std::string const & name);
    ClapTrap(const ClapTrap & src);
    ClapTrap &operator=(const ClapTrap & src);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif //EX00_CLAPTRAP_HPP
