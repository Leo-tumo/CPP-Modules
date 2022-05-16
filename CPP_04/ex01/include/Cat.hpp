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
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(Cat const &);
	Cat &operator=(Cat const &);
	virtual ~Cat();

	virtual void makeSound() const;
	const Brain& getBrain() const;
};

#endif // CAT_HPP
