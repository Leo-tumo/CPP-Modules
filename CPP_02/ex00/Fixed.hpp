// ********************************************************************** //
//                                                                        //
//             Fixed.hpp                                                  //
//             Created: 2022/05/08 21:09:26 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
# define WHITE "\033[0m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;92m"
# define MAGENTA "\033[1;35m"

class Fixed
{
private:
    int _value;
    static const int fractionalBits = 8;

public:
    Fixed();

    Fixed(const Fixed &src);

    Fixed &operator=(const Fixed &src);

    int getRawBits( void ) const;

    void setRawBits( int const raw);

    ~Fixed();
};

#endif
