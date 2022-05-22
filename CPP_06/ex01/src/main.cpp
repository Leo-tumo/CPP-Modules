// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/22 17:38:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Serialization.hpp"

int main(void)
{
	Data leo;

	leo.name = "Leonidas";
	leo.info = "Whiskey lover";

	uintptr_t out = serialize(&leo);

	Data *data = deserialize(out);

	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Info: " << data->info << std::endl;
}
