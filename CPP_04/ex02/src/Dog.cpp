// ********************************************************************** //
//                                                                        //
//             Dog.cpp                                                    //
//             Created: 2022/05/14 14:09:40 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Dog.hpp"

Dog::Dog(): _brain(new Brain) { 
	this->type = "Dog";
	std::cout << "\033[1;35mDog Constructor 🐕‍🦺" << std::endl;
}

Dog::~Dog(){
	std::cout << "\033[1;35mDog Destructor 🐕‍🦺" << std::endl;
	delete _brain;
}

Dog::Dog( const Dog &src ) {
	type = src.type;
	this->_brain = new Brain(*src._brain);
}

Dog & Dog::operator=(Dog const & src){
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "\033[1;35mGaf-Gaf... 🐶" << std::endl;
}

const Brain& Dog::getBrain() const{
	return *_brain;
}
