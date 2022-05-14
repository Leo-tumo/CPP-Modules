// ********************************************************************** //
//                                                                        //
//             WrongCat.hpp                                               //
//             Created: 2022/05/14 15:39:09 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &copy);
	virtual ~WrongCat();
	void makeSound() const;
};
#endif
