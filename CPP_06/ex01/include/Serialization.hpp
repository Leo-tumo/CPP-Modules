// ********************************************************************** //
//                                                                        //
//             Serialization.hpp                                          //
//             Created: 2022/05/22 17:40:47 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>

typedef struct
{
	std::string info;
	std::string name;
} Data;

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif // SERIALIZATION_HPP
