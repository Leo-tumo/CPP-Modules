// ********************************************************************** //
//                                                                        //
//             Convert.hpp                                                //
//             Created: 2022/05/22 12:07:57 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_CONVERT_HPP
#define EX00_CONVERT_HPP
#include <string>
#include <iostream>

class Convert
{
private:
    std::string _value;
    Convert();

public:
    Convert(std::string const &value);
    Convert(Convert const & src);
    Convert &operator=(Convert const & src);
    ~Convert();
    std::string const &getValue() const;
    char toChar() const;
    int toInt() const;
    float toFloat() const;
    double toDouble() const;

    class ImpossibleException : public std::exception
    {
        const char *what() const throw();
    };

    class NonDisplayableException : public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Convert const &Convert);

#endif //EX00_CONVERT_HPP
