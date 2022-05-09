// ********************************************************************** //
//                                                                        //
//             Fixed.cpp                                                  //
//             Created: 2022/05/08 21:09:20 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(int value){
    this->_value = value << this->fractionalBits;
}

Fixed::Fixed(float value){
    this->_value = (int)roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Assignment operator called" << std::endl;
    this->_value = other.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
    out << value.toFloat();
    return (out);
}

int Fixed::toInt(void) const{
    return (this->_value >> this->fractionalBits);
}

float Fixed::toFloat(void) const{
    return ((float)this->_value / (1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int raw){
    std::cout << "setRawBits called" << std::endl;
    this->_value = raw;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
