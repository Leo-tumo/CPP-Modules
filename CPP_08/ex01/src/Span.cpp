// ********************************************************************** //
//                                                                        //
//             Span.cpp                                                   //
//             Created: 2022/05/25 13:49:32 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Span.hpp"

Span::Span(): _size(0) {}

Span::Span(unsigned int N) : _size(N) {
    this->_values.reserve(N);
}

Span::Span(Span const &src): _size(src.size()), _values(src.getValues()) {}

Span &Span::operator=(Span const &src)
{
    if (this != &src)
    {
        _size = src.size();
        _values = src.getValues();
    }
    return *this;
}

Span::~Span() {}

unsigned int Span::size() const { return _size; }

std::vector<int> const &Span::getValues() const { return _values; }

void Span::addNumber(int n)
{
    if (_values.size() >= _size)
        throw Span::FullException();
    _values.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
    int size = std::distance(begin, end);
    if (size > static_cast<int>(_size))
        throw Span::FullException();
    _values.insert(_values.end(), begin, end);
}

long Span::shortestSpan() const
{
    if (_values.size() < 2)
        throw Span::CantSearchException();
    std::vector<int> sorted = _values;

    std::sort(sorted.begin(), sorted.end());
    std::vector<int>::iterator prev_it = sorted.begin();
    std::vector<int>::iterator next_it = ++sorted.begin();
    long ret = abs(*next_it - *prev_it);

    while (next_it != sorted.end())
    {
        if (abs(static_cast<long>(*next_it) - *prev_it) < ret)
            ret = abs(static_cast<long>(*next_it) - *prev_it);
        prev_it = next_it;
        next_it++;
    }
    return ret;
}

long Span::longestSpan() const
{
    if (_values.size() < 2)
        throw Span::CantSearchException();
    std::vector<int> copy = _values;

    std::sort(copy.begin(), copy.end());

    return ((long)copy.back() - copy.front());
}

const char *Span::CantSearchException::what() const throw(){
    return ("\033[1;31mSearch Error\033[0m");
}
const char *Span::FullException::what() const throw(){
    return ("\033[1;31mBuffer is full\033[0m");
}
const char *Span::OutOfRangeException::what() const throw(){
    return ("\033[1;31mOut of range\033[0m");
}
