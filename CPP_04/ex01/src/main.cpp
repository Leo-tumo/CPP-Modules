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
#include <unistd.h>

int main()
{
	int size = 10;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[size];

	for (int i = 0; i < (size); i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for ( int i = 0; i < size; i++)
		delete animals[i];

	delete j;	//should not create a leak
	delete i;

	std::cout << "\n\t\t\033[1;31mNow I'm using Brains ⬇️\033[0m" << std::endl;
	sleep(2);
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);

	std::cout << test->getBrain() << std::endl;
	delete test;
	sleep(2);

	std::cout  << "\t\t\033[1;31mCat's copy after deleting original ⬇️ ⬇️\033[0m"  << std::endl;
	sleep(2);
	std::cout << copy->getBrain() << std::endl;
	delete copy;

	sleep(2);
	std::cout << std::endl  << "\t\t\033[1;31mNow dog's brain...\033[0m" << std::endl;
	sleep(2);
	Dog* test2 = new Dog;
	Dog* copy2 = new Dog(*test2);
	std::cout << test2->getBrain() << std::endl;
	delete test2;
	sleep(2);

	std::cout  << "\n\t\t\033[1;31mDog's copy after deleting original ⬇️ ⬇️\033[0m"  << std::endl;
	sleep(2);
	std::cout << copy2->getBrain() << std::endl;
	sleep(2);
	std::cout << "\033[1;31mNow let me read your ideas...\n-->\t" << copy2->getBrain().getIdea(9) << "\nGreat choice btw!\033[0m\n" << std::endl;
	delete copy2;
	
	system("leaks Lagavulin"); // testing for leaks

}