// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/04/29 11:11:41 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "PhoneBook.hpp"

void    crap(){
    std::cout << GREEN "🅜  🅨     🅐  🅦  🅔  🅢  🅞  🅜  🅔\n"
	<< "🅟  🅗  🅞  🅝  🅔  🅑  🅞  🅞  🅚\n"
	<< "➊. 🅐  🅓  🅓\n"
	<< "➋. 🅢  🅔  🅐  🅡  🅒  🅗\n"
	<< "➌. 🅔  🅧  🅘  🅣" WHITE << std::endl;
}

int main(){
    PhoneBook   pb;
    std::string cmd;

    crap();
    for(;;){
        std::cout << CYAN "Enter command: " << WHITE;
        getline(std::cin, cmd);
        if (cmd == "ADD")
            pb.add();
        else if (cmd == "SEARCH")
			pb.search();
        else if (cmd == "EXIT")
		{
			std::cout << MAGENTA << "GOOD BYE" << std::endl;
			break;
		}
        else
        {
            std::cout << RED "COMMAND NOT FOUND!" << std::endl;
        }
        if(std::cin.eof()){
            break ;
        }
    }
}
