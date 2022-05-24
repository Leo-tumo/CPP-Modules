// ********************************************************************** //
//                                                                        //
//             iter.cpp                                                   //
//             Created: 2022/05/24 14:58:36 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template <typename T>
void iter(T array[], int len, void (*func) (T)){
    for (int i = 0; i < len; ++i)
        func(array[i]);
}

#endif //EX01_ITER_HPP
