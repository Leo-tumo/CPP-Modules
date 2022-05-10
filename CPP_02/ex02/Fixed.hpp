// ********************************************************************** //
//                                                                        //
//             Fixed.hpp                                                  //
//             Created: 2022/05/08 21:09:26 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_FIXED_HPP
# define EX02_FIXED_HPP
# include <iostream>
# define WHITE "\033[0m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;92m"
# define MAGENTA "\033[1;35m"

class Fixed
{
private:
	int 				_value;
	static const int 	_fractionalBits = 8;

public:
	Fixed(void);
	Fixed(int value);
	Fixed(float value);

	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);
	
//############################################# Comparison operator
	bool operator<(const Fixed &b);
	bool operator>(const Fixed &b);
	bool operator<=(const Fixed &b);
	bool operator>=(const Fixed &b);
	bool operator==(const Fixed &b);
	bool operator!=(const Fixed &b);

// ############################################ Arithmetic operators
	Fixed operator+(const Fixed &b);
	Fixed operator-(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);

// ############################### Increment and decrement operators
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

// ############################################ Conversion operators
	int toInt(void) const;
	float toFloat(void) const;

	int getRawBits(void) const;
	void setRawBits(const int raw);

	~Fixed();

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
