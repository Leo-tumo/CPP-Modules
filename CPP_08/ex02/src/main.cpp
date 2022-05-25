// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/24 14:56:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>
#define USING_MAIN_3

#ifdef USING_MAIN_1
//subject test
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
    ++it; }
    std::stack<int> s(mstack); return 0;
}

#elifdef USING_MAIN_2
// subject test with list
int main()
{
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3); lst.push_back(5);
    lst.push_back(737); //[...] lst.push(0);
    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
//    std::stack<int> s(lst);
    return 0;
}

#elifdef USING_MAIN_3
// reverse iterator test
int main(){

        MutantStack<int> rvs;
		for (int i = 1; i < 8; ++i) rvs.push(i);

		for (MutantStack<int>::reverse_iterator r_iter = rvs.rbegin(); r_iter != rvs.rend(); r_iter++)
			std::cout << "value : " << *r_iter << std::endl;
}


#endif
