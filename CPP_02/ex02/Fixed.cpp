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
	std::cout << CYAN << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int value){
	std::cout << CYAN << "Int constructor called" << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float value){
	std::cout << CYAN << "Float constructor called" << std::endl;
	this->_value = (int)roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &src){
	std::cout << GREEN << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << MAGENTA << "Copy assignment operator called" << WHITE << std::endl;
	this->_value = other.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &b){
	return (this->_value < b._value);
}

bool Fixed::operator>(const Fixed &b){
	return (this->_value > b._value);
}

bool Fixed::operator<=(const Fixed &b){
	return (this->_value <= b._value);
}

bool Fixed::operator>=(const Fixed &b){
	return (this->_value >= b._value);
}

bool Fixed::operator==(const Fixed &b){
	return (this->_value == b._value);
}

bool Fixed::operator!=(const Fixed &b){
	return (this->_value != b._value);
}

Fixed Fixed::operator+(const Fixed &b){
	Fixed ret;

	ret.setRawBits(this->_value + b._value);
	return (ret);
}

Fixed Fixed::operator-(const Fixed &b){
	Fixed ret;

	ret.setRawBits(this->_value - b._value);
	return (ret);
}

Fixed Fixed::operator*(const Fixed &b){
	Fixed ret;
	ret.setRawBits(this->_value * b._value / (1 << this->_fractionalBits));
	return (ret);
}

Fixed Fixed::operator/(const Fixed &b){
	Fixed ret;
	ret.setRawBits(this->_value / b._value * (1 << this->_fractionalBits));
	return (ret);
}

Fixed &Fixed::operator++(void){
	this->_value += 1;
	return (*this);
}

Fixed &Fixed::operator--(void){
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed ret(*this);

	this->_value += 1;
	return (ret);
}

Fixed Fixed::operator--(int){
	Fixed ret(*this);

	this->_value -= 1;
	return (ret);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
	out << value.toFloat();
	return (out);
}

int Fixed::toInt(void) const{
	return (this->_value >> this->_fractionalBits);
}

float Fixed::toFloat(void) const{
	return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::getRawBits(void) const{
	return (this->_value);
}

void Fixed::setRawBits(int raw){
	this->_value = raw;
}

Fixed::~Fixed(void){
	std::cout << RED << "Destructor called" << WHITE << std::endl;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return ((Fixed)a < (Fixed)b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return ((Fixed)a > (Fixed)b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a > b) ? a : b;
}
