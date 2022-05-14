// ********************************************************************** //
//                                                                        //
//             Animal.cpp                                                 //
//             Created: 2022/05/14 14:09:30 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Animal.hpp"

Animal::Animal(){
	this->type = "Animal";
	std::cout << "\033[1;92mAnimal is Created 🦄" << std::endl;
}

Animal::Animal(Animal const &other){
	*this = other;
}

Animal &Animal::operator=(Animal const &other){
	this->type = other.getType();
	return (*this);
}

Animal::~Animal(){
	std::cout << "\033[1;92mAnimal Destructor 🦄 -->" << this->type << std::endl;
}

std::string const &Animal::getType() const{
	return (this->type);
}

void Animal::makeSound() const{
	std::cout << "\033[1;92mAnimal Animal 🦄" << std::endl;
}
