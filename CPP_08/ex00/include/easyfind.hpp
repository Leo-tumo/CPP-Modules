// ********************************************************************** //
//                                                                        //
//             easyfind.hpp                                               //
//             Created: 2022/05/25 13:49:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <algorithm>
#include <iterator>

class NotFoundException : public std::exception
{
public:
    const char *what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NotFoundException();
    return it;
};

#endif //EX00_EASYFIND_HPP
