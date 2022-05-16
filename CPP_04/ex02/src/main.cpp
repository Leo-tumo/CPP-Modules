// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/14 14:09:20 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Brain.hpp"

int main() {

	// const Animal *meta = new Animal(); // Should crash
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound(); // Should crash
	delete j;
	delete i;
}