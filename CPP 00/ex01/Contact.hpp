// ********************************************************************** //
//                                                                        //
//             Contact.hpp                                                //
//             Created: 2022/04/29 11:16:25 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_CONTACT_HPP
# define EX01_CONTACT_HPP

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

# include <iostream>

class Contact
{
public:
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;

	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickname(std::string s);
	void setPhoneNumber(std::string s);
	void setDarkestSecret(std::string s);

private:
	std::string	_first_name; 
	std::string _last_name; 
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
