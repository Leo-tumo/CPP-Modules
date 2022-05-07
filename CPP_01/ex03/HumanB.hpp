// ********************************************************************** //
//                                                                        //
//             HumanB.hpp                                                 //
//             Created: 2022/05/06 20:48:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX_03_HUMANB_HPP
#define EX_03_HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string	_name;
    Weapon	    *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void	    attack();
    std::string	getName() const;
    void	    setName(std::string name);
    void	    setWeapon(Weapon& weapon);
};

#endif
