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
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();
	wrong->makeSound();
	wrong_cat->makeSound();
	delete meta;
	delete wrong;
	delete wrong_cat;
	delete j;
	delete i;

	return 0; 
}