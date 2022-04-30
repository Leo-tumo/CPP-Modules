// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/04/29 11:11:41 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Contact.hpp"

int main(){
    Contact instance;

	std::string xcho;
    instance.setFirstName("Leo");
    std::cout << instance.getFirstName() << std::endl;
	std::cin >> xcho;
	std::cout << xcho << "stacvec"<<std::endl;
}
