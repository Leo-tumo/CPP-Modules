// ********************************************************************** //
//                                                                        //
//             Span.hpp                                                   //
//             Created: 2022/05/25 13:49:45 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class Span
{
private:
    unsigned int _size;
    std::vector<int> _values;
    Span();

public:
    Span(unsigned int N);
    Span(Span const &src);
    Span &operator=(Span const &src);
    ~Span();

    unsigned int size() const;
    std::vector<int> const &getValues() const;

    void addNumber(int n);
    void addNumber(std::vector<int>::iterator const &, std::vector<int>::iterator const &);
    long shortestSpan() const;
    long longestSpan() const;

    class OutOfRangeException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class FullException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class CantSearchException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif //EX01_SPAN_HPP
