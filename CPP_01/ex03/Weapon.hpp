// ********************************************************************** //
//                                                                        //
//             Weapon.hpp                                                 //
//             Created: 2022/05/06 20:47:13 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX_03_WEAPON_HPP
#define EX_03_WEAPON_HPP
#include <iostream>

class Weapon{
private:
    std::string     _type;

public:
    Weapon(std::string type);
    ~Weapon();
    std::string getType() const;
    void    setType(std::string new_one);
};

#endif