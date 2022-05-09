// ********************************************************************** //
//                                                                        //
//             Fixed.hpp                                                  //
//             Created: 2022/05/08 21:09:26 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

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
