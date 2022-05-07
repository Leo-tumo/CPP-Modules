// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/06 21:06:14 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"

int main() {

    Zombie *solomon;
    Zombie *rob;

    solomon = newZombie("Solomon Grundy");
    rob = newZombie("Rob Zombie");
    solomon->announce();
    rob->announce();
    randomChump("Snoop DOGG");
    delete rob;
    delete solomon;
}