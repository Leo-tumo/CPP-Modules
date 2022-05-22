// ********************************************************************** //
//                                                                        //
//             Scalar.hpp                                                 //
//             Created: 2022/05/22 12:07:57 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_SCALAR_HPP
#define EX00_SCALAR_HPP
#include <string>
#include <iostream>

class Scalar
{
private:
    std::string _value;
    Scalar();

public:
    Scalar(std::string const &value);
    Scalar(Scalar const & src);
    Scalar &operator=(Scalar const & src);
    ~Scalar();
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

std::ostream &operator<<(std::ostream &os, Scalar const &scalar);

#endif //EX00_SCALAR_HPP
