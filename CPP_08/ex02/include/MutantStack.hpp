// ********************************************************************** //
//                                                                        //
//             MutantStack.hpp                                            //
//             Created: 2022/05/25 13:50:12 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef	typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    iterator	begin() { return this->c.begin(); }
    iterator	end() { return this->c.end(); }
    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }
};


#endif //EX02_MUTANTSTACK_HPP
