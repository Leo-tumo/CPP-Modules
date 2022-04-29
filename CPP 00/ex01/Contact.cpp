// ********************************************************************** //
//                                                                        //
//             Contact.cpp                                                //
//             Created: 2022/04/29 11:16:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Contact.hpp"

	std::string Contact::getFirstName(void) const{
        return _first_name;
    }
	std::string Contact::getLastName(void) const{
        return _last_name;
    }
	std::string Contact::getNickname(void) const{
        return _nickname;
    }
	std::string Contact::getPhoneNumber(void) const{
        return _phone_number;
    }
	std::string Contact::getDarkestSecret(void) const{
        return _darkest_secret;
    }

	void Contact::setFirstName(std::string s){
        this->_first_name = s;
    }
	void Contact::setLastName(std::string s){
        this->_last_name = s;
    }
	void Contact::setNickname(std::string s){
        this->_nickname = s;
    }
	void Contact::setPhoneNumber(std::string s){
        this->_phone_number = s;
    }
	void Contact::setDarkestSecret(std::string s){
        this->_darkest_secret = s;
    }
