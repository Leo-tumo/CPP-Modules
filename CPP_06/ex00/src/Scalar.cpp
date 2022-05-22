// ********************************************************************** //
//                                                                        //
//             Scalar.cpp                                                 //
//             Created: 2022/05/22 12:07:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Scalar.hpp"
#include <cmath>

Scalar::Scalar(): _value("error"){}

Scalar::Scalar(std::string const &value): _value(value) {}

Scalar::Scalar(Scalar const & src): _value(src._value) {}

Scalar &Scalar::operator=(Scalar const & src) {
    this->_value = src._value;
    return *this;
}

Scalar::~Scalar(){}

std::string const &Scalar::getValue() const {
    return _value;
}

char Scalar::toChar() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
        if (n < 0 || n > 255)
            throw Scalar::ImpossibleException();
    }
    catch (...)
    {
        throw Scalar::ImpossibleException();
    }
    if (!isprint(n))
        throw Scalar::NonDisplayableException();
    return (static_cast<char>(n));
}

int Scalar::toInt() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
    }
    catch (...)
    {
        throw Scalar::ImpossibleException();
    }
    return (n);
}

float Scalar::toFloat() const
{
    float f;

    try
    {
        f = std::stof(this->_value);
    }
    catch (...)
    {
        throw Scalar::ImpossibleException();
    }
    return (f);
}

double Scalar::toDouble() const
{
    double d;

    try
    {
        d = std::stod(this->_value);
    }
    catch (...)
    {
        throw Scalar::ImpossibleException();
    }
    return (d);
}

std::ostream &operator<<(std::ostream &os, const Scalar &scalar)
{
    os << "char: ";
    try
    {
        char c = scalar.toChar();
        os << "'" << c << "'" << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }

    os << "int: ";
    try
    {
        os << scalar.toInt() << std::endl;
    }
    catch (const std::exception &e)
    {
        os << e.what() << std::endl;
    }

    os << "float: ";
    try
    {
        float f = scalar.toFloat();

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
        double d = scalar.toDouble();

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

const char *Scalar::ImpossibleException::what() const throw(){return "impossible";}

const char *Scalar::NonDisplayableException::what() const throw(){return "Non displayable";}


