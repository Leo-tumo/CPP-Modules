// ********************************************************************** //
//                                                                        //
//             Animal.hpp                                                 //
//             Created: 2022/05/14 15:38:33 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &);
	Animal &operator=(Animal const &);
	virtual ~Animal();

	std::string const &getType() const;
	virtual void makeSound() const = 0;
};

#endif // ANIMAL_HPP
