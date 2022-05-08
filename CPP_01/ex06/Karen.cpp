// ********************************************************************** //
//                                                                        //
//             Karen.cpp                                                  //
//             Created: 2022/05/06 20:50:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Karen.hpp"

void	Karen::debug( void ){
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Karen::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t "
	<< "put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
	<< " coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string moods[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen:: *mood[]) (void) = {
		mood[0] = &Karen::debug,
		mood[1] = &Karen::info,
		mood[2] = &Karen::warning,
		mood[3] = &Karen::error
	};
	for (int i = 0; i < 4; i++)
		if (moods[i] == level){
			(this->*mood[i])();
			return ;
		}
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
