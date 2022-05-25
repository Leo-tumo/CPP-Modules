// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/25 10:56:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "easyfind.hpp"
#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include "set"
#include "list"

const char *NotFoundException::what() const throw() {
        return "Not Found";
}

int	main() {
    std::deque<int> d;
    std::vector<int>    v;
    std::set<int>   s;
    std::list<int>  l;

    for (int i = 1; i < 7; ++i){
        d.push_back(i * i * i);
        v.push_back(i * i * i * i);
        s.insert(i * i);
        l.push_back(i * 11);
    }
    try{
        std::cout << *easyfind(s, 9) << " found in SET" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << " in SET" << std::endl;
    }
    try{
        std::cout << *easyfind(v, 37) << " found in VECTOR" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << " in VECTOR" << std::endl;
    }
	try{
        std::cout << *easyfind(d, 27) << " found in DEQUE" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << " in DEQUE" << std::endl;
    }
    try{
        std::cout << *easyfind(l, 55) << " found in LIST" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << " in LIST" << std::endl;
    }

    for(std::set<int>::const_iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << "\t";
    }
	std::cout << "<--SET" << std::endl;
	for(std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << "\t";
    }
	std::cout << "<--VECTOR" << std::endl;
	for(std::deque<int>::const_iterator it = d.begin(); it != d.end(); ++it) {
        std::cout << *it << "\t";
    }
	std::cout << "<--DEQUE" << std::endl;
	for(std::list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << "\t";
    }
	std::cout << "<--LIST\n" << std::endl;

	std::cout << "Now let's find 625 in vector & print the next element" << std::endl;  
	std::vector<int>::iterator v_it = easyfind(v, 625);
	std::cout << *(++v_it) << " <--This is the next element" << std::endl;
}
