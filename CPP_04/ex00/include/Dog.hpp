// ********************************************************************** //
//                                                                        //
//             Dog.hpp                                                    //
//             Created: 2022/05/14 15:38:52 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &);
	Dog &operator=(Dog const &);
	virtual ~Dog();

	virtual void makeSound() const;
};

#endif
