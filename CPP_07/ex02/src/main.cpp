// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/24 14:56:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	Array<std::string> array(5);

	for (int i = 0; i < 5; i++){
		array[i] = std::string("test_" + std::to_string(i));
	}

	Array<std::string> cp_array(array);

	cp_array[2] = "I'm modified";
	for (int i = 0; i < 5; i++){
		std::cout << cp_array[i] << std::endl;
	}
	std::cout<<"_______________________"<<std::endl;
	for (int i = 0; i < 5; i++){
		std::cout << array[i] << std::endl;
	}

	std::cout<<"_______________________"<<std::endl;

	Array<std::string> array2;

	array2 = array;

	for (int i = 0; i < 5; i++){
		std::cout << array2[i] << std::endl;
	}
	Array<int> arr;
	try{
		std::cout << arr[0] << std::endl;}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
