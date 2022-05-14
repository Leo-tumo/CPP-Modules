// ********************************************************************** //
//                                                                        //
//             WrongAnimal.cpp                                            //
//             Created: 2022/05/14 14:10:08 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "Wrong Animal";
	std::cout << "\033[0mWrong Animal is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
	this->type = src.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "\033[0mWrong Animal Destructor -->" << this->type << std::endl;
}

std::string const &WrongAnimal::getType() const{
	return this->type;
}

void WrongAnimal::makeSound() const{
	std::cout << "\033[31mGrowling 🎸" << std::endl;
}
