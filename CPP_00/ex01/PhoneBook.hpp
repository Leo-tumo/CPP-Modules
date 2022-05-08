// ********************************************************************** //
//                                                                        //
//             PhoneBook.hpp                                              //
//             Created: 2022/04/29 11:16:50 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_PHONEBOOK_HPP
# define EX01_PHONEBOOK_HPP

// ************************************************************************** //
//                              PhoneBook Class                               //
// ************************************************************************** //

# define WHITE "\001\033[0m\002"
# define RED "\001\033[1;31m\002"
# define CYAN "\001\033[1;36m\002"
# define GREEN "\001\033[1;92m\002"
# define MAGENTA "\001\033[1;35m\002"

# include <iomanip>
# include "Contact.hpp"
# include <string>

class PhoneBook
{
public:
    void    add(void);
    void    search(void);
    void    exit(void);
    void    displayContacts(void);
    PhoneBook();
    ~PhoneBook();

private:
    Contact         _contacts[8];
    unsigned int    _current;
    unsigned int    _index;
};


#endif
