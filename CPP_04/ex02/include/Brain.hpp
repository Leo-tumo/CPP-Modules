// ********************************************************************** //
//                                                                        //
//             Brain.hpp                                                  //
//             Created: 2022/05/14 14:10:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);
	virtual ~Brain();

	std::string const &getIdea(int index) const;
};
	std::ostream& operator<<(std::ostream& out, const Brain &brain);

#endif // BRAIN_HPP
