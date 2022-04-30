// ********************************************************************** //
//                                                                        //
//             megaphone.cpp                                              //
//             Created: 2022/04/29 11:25:14 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>

int main(int argc, char **argv) {
    
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i = 1; i < argc; ++i)
    {
        for(int j = 0; argv[i][j] != '\0'; ++j)
        {
            if (argv[i][j] <= 'z' && argv[i][j] >= 'a') {
                argv[i][j] &= ~(1 << 5);
                std::cout << argv[i][j];
            }
            else
                std::cout << argv[i][j];
        }
    }
	std::cout << std::endl;
	return 0;
}

