// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/06 20:46:01 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Zombie.hpp"

int main(){
    int         num;
    std::string name;
    Zombie      *horde;

    std::cout << "Enter the count and names of Zombie Horde:" << std::endl;
    std::cin >> num >> name;
    std::cin.ignore();
    horde = zombieHorde(num, name);
    for(int i = 0; i < num; ++i)
        horde[i].announce();
    delete [] horde;
}

