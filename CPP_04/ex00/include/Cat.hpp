// ********************************************************************** //
//                                                                        //
//             Cat.hpp                                                    //
//             Created: 2022/05/14 15:38:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &);
	Cat &operator=(Cat const &);
	virtual ~Cat();

	virtual void makeSound() const;
};

#endif
