// ********************************************************************** //
//                                                                        //
//             Fixed.hpp                                                  //
//             Created: 2022/05/08 21:09:26 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_FIXED_HPP
# define EX01_FIXED_HPP
# include <iostream>
# define WHITE "\033[0m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;92m"
# define MAGENTA "\033[1;35m"

class Fixed
{
private:
    static const int    fractionalBits = 8;
    int                 _value;
	
public:
    Fixed();

    Fixed(int value);

    Fixed(float value);

    Fixed(Fixed const & src);

    Fixed & operator=(Fixed const & src);

    int     getRawBits() const;

    void    setRawBits(int raw);

    float toFloat( void ) const;

    int toInt( void ) const;

    ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif