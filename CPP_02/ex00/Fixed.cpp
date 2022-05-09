// ********************************************************************** //
//                                                                        //
//             Fixed.cpp                                                  //
//             Created: 2022/05/08 21:09:20 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include "Fixed.hpp"

# define WHITE "\033[0m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;92m"
# define MAGENTA "\033[1;35m"

Fixed::Fixed(void){
    std::cout << CYAN << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << GREEN << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << MAGENTA << "Copy assignment operator called" << std::endl;
    this->_value = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << WHITE << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int raw)
{
    std::cout << "setRawBits called" << std::endl;
    this->_value = raw;
}

Fixed::~Fixed(void)
{
    std::cout << RED << "Destructor called" << std::endl;
}
