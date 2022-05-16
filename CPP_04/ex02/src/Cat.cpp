// ********************************************************************** //
//                                                                        //
//             Cat.cpp                                                    //
//             Created: 2022/05/14 14:10:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Cat.hpp"

Cat::Cat(): _brain(new Brain) { 
	this->type = "Cat";
	std::cout << "\033[1;36mCat Constructor  🐈" << std::endl;
}

Cat::~Cat(){
	std::cout << "\033[1;36mCat Destructor 🐈" << std::endl;
	delete _brain;
}

Cat::Cat( const Cat &src ) {
	type = src.type;
	_brain = new Brain(*src._brain);
	}

Cat & Cat::operator=(Cat const & src){
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "\033[1;36mMeow_Meow  😼" << std::endl;
}

const Brain& Cat::getBrain() const{
	return *_brain;
}
