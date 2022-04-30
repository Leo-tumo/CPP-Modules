// ********************************************************************** //
//                                                                        //
//             PhoneBook.cpp                                              //
//             Created: 2022/04/29 11:16:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    _current = 0;
    _index = 0;
}
 
PhoneBook::~PhoneBook(){};

void	emptyChecker(std::string &temp, std::string display, bool flag){
	if (flag)
		temp.erase();
	std::cout << CYAN << display << WHITE;
	do{
		getline(std::cin, temp);
		if(temp.empty())
			std::cout << RED "Don't leave me empty🥺 " WHITE;}
	while(temp.empty());
}

void   PhoneBook::add(){
	Contact tmp;
    std::string temp;

	emptyChecker(temp, "First Name: ", false);
	tmp.setFirstName(temp);
	emptyChecker(temp, "Last Name: ", true);
	tmp.setLastName(temp);
	emptyChecker(temp, "Nickname: ", true);
	tmp.setNickname(temp);
	emptyChecker(temp, "Phone number: ", true);
	tmp.setPhoneNumber(temp);
	emptyChecker(temp, "Darkest Secret: ", true);
 	tmp.setDarkestSecret(temp);
	this->_contacts[_current % 8] = tmp;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
	std::cout << GREEN << "CONTACT ADDED SUCCESSFULY" << std::endl;
}

std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void    PhoneBook::displayContacts(){
	std::cout << MAGENTA << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(_contacts[i].getFirstName())
		<< "|" << std::setw(10) << resize(_contacts[i].getLastName())
		<< "|" << std::setw(10) << resize(_contacts[i].getNickname()) << "|"
		<< std::endl;
	}
}

void    PhoneBook::search(){
	unsigned int index;
	displayContacts();
	std::cout << GREEN << "Enter The index: " << WHITE;
	std::cin >> index;
	if (std::cin.fail())
		std::cout << RED << "INDEX INVALID !\n" << WHITE;
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
		}
		else
			std::cout << RED << "INDEX INVALID !\n" << WHITE;
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
