// ********************************************************************** //
//                                                                        //
//             zombieHorde.cpp                                            //
//             Created: 2022/05/06 20:45:07 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){
    Zombie  *horde = new Zombie[N];
    for(int i = 0; i < N; ++i)
        horde[i].setName(name);
    return horde;
}

