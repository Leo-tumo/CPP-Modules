// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/25 11:06:46 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Span.hpp"
#include <iostream>
#define USING_MAIN_1

#ifdef USING_MAIN_1
//subject test
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

#elifdef USING_MAIN_2
// iterator test v1
// also checking massive addNumbers
int main()
{
    try
    {
        Span sp = Span(100000);
        std::vector<int> v;
         sp.addNumber(2147483647);
         sp.addNumber(-2147483648);
        for (int i = 1; i <= 300000; i+= 3)
            v.push_back(i);
        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

#elifdef USING_MAIN_3
// iterator test v2
int main(){

        Span sp(10000);

        std::vector<int> vec;
        for (int i = 1; i < 10001; i++)
        {
            vec.push_back(i * i);
        }
        sp.addNumber(vec.begin(), vec.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
}

#elifdef USING_MAIN_4
// exception test
int main(){
    Span sp = Span(5);

    std::cout << "empty vector" << std::endl;
    try{
        sp.shortestSpan();
    }catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        sp.longestSpan();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

	sp.addNumber(1);
    std::cout << "1 element only" << std::endl;
    try{
        sp.shortestSpan();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        sp.longestSpan();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "pushing the limit" << std::endl;
    try {
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4);
        sp.addNumber(5);
        sp.addNumber(6);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

#endif