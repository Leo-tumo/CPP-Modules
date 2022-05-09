// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/08 21:09:09 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Fixed.hpp"
#include <iostream>
int main() {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
