// ********************************************************************** //
//                                                                        //
//             WrongAnimal.hpp                                            //
//             Created: 2022/05/14 15:39:01 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>


class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	std::string const &getType() const;
	void makeSound() const;
};
#endif
