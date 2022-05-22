// ********************************************************************** //
//                                                                        //
//             Convert.cpp                                                //
//             Created: 2022/05/22 12:07:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Convert.hpp"
#include <cmath>

Convert::Convert(): _value("error"){}

Convert::Convert(std::string const &value): _value(value) {}

Convert::Convert(Convert const & src): _value(src._value) {}

Convert &Convert::operator=(Convert const & src) {
    this->_value = src._value;
    return *this;
}

Convert::~Convert(){}

std::string const &Convert::getValue() const {
    return _value;
}

char Convert::toChar() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
        if (n < 0 || n > 255)
            throw Convert::ImpossibleException();
    }
    catch (...)
    {
        throw Convert::ImpossibleException();
    }
    if (!isprint(n))
        throw Convert::NonDisplayableException();
    return (static_cast<char>(n));
}

int Convert::toInt() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
    }
    catch (...)
    {
        throw Convert::ImpossibleException();
    }
    return (n);
}

float Convert::toFloat() const
{
    float f;

    try
    {
        f = std::stof(this->_value);
    }
    catch (...)
    {
        throw Convert::ImpossibleException();
    }
    return (f);
}

double Convert::toDouble() const
{
    double d;

    try
    {
        d = std::stod(this->_value);
    }
    catch (...)
    {
        throw Convert::ImpossibleException();
    }
    return (d);
}

std::ostream &operator<<(std::ostream &os, const Convert &Convert)
{
    os << "char: ";
    try
    {
        char c = Convert.toChar();
        os << "'" << c << "'" << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }

    os << "int: ";
    try
    {
        os << Convert.toInt() << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }

    os << "float: ";
    try
    {
        float f = Convert.toFloat();

        if (std::isnan(f) && std::signbit(f))
            os << "-";
        os << f;
        if (!std::isnan(f) && f - static_cast<int>(f) == 0)
            os << ".0";
        os << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }

    os << "double: ";
    try
    {
        double d = Convert.toDouble();

        if (std::isnan(d) && std::signbit(d))
            os << "-";
        os << d;
        if (!std::isnan(d) && d - static_cast<int>(d) == 0)
            os << ".0";
        os << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }
    return (os);
}

const char *Convert::ImpossibleException::what() const throw(){return "impossible";}

const char *Convert::NonDisplayableException::what() const throw(){return "Non displayable";}


