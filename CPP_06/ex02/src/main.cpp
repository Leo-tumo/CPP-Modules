// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/23 03:08:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
    switch(rand() % 3)
    {
        case 0:
            return new A();
            break;
        case 1:
            return new B();
            break;
        case 2:
            return new C();
            break;
        default:
            return nullptr;
    }
}

void identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	ptr;
	try
	{
		ptr = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(...) {}
	try
	{
		ptr = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(...) {}
	try
	{
		ptr = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(...) {}
}

int main(){
    srand(time(nullptr));
    for(int i = 0; i < 10; ++i){
        Base *p = generate();
		if (i % 2)
        	identify(p);
		else
			identify(*p);
		delete p;
    }
}
