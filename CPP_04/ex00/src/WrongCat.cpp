// ********************************************************************** //
//                                                                        //
//             WrongCat.cpp                                               //
//             Created: 2022/05/14 14:09:53 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(){
	type = "Wrong Cat";
	std::cout << "Wrong Cat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
	this->WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "\033[0mWrong Cat Destructor" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "\033[0mFake Meow 😂 " << std::endl;
}
