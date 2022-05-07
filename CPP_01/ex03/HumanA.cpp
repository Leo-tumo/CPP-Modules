// ********************************************************************** //
//                                                                        //
//             HumanA.cpp                                                 //
//             Created: 2022/05/06 20:47:59 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Weapon.hpp"
#include "HumanA.hpp"

    HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon) {}

    HumanA::~HumanA(){}

    void	HumanA::attack(){
        std::cout << this->_name <<" attacks with their " << _weapon.getType() << std::endl;
}
