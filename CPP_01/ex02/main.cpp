// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/06 20:46:25 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>

int main(){
    std::string     str = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << "\x1b[33mstring memory address is: " << &str << std::endl
    << "\x1b[32mstringPTR memory address is: " <<  stringPTR << std::endl
    << "\x1b[34mstringREF memory address is: " << &stringREF << std::endl;

    std::cout << "\x1b[33mstring value is: " << str << std::endl
    << "\x1b[32mstringPTR value is: " << *stringPTR << std::endl
    << "\x1b[34mstringREF value is: " << stringREF << std::endl;

}
