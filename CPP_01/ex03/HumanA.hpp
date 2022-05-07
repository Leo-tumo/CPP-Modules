// ********************************************************************** //
//                                                                        //
//             HumanA.hpp                                                 //
//             Created: 2022/05/06 20:47:49 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX_03_HUMANA_HPP
#define EX_03_HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string	_name;
    Weapon&     _weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void	attack();
};

#endif
