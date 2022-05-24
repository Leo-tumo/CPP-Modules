// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/24 14:56:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "iter.hpp"
#include <iostream>

template <typename T>
void print_signed(T a){
    std::cout << a << "_signed || ";
}

template <>
void print_signed(double a){
    std::cout << (a * a) << "_signed || ";
}

int	main(  ) {
    int arr[10] = {1, 12, 32, 15, 15, 34, 76, 93, 22, -23};
    std::string arr_s[4] = {"clubs (♣)", "diamonds (♦)", "hearts (♥)",  "spades (♠)"};
    iter(arr, 10, print_signed);
    std::cout << "\n–––––––––––––––––––––––––––––––––––––––" << std::endl;
    iter(arr_s, 4, print_signed);
    std::cout << "\n–––––––––––––––––––––––––––––––––––––––" << std::endl;
    double arr_d[5] = {1.3, 4.4, 5.5, 6.6, 7.7};
    iter(arr_d, 5, print_signed);
}
