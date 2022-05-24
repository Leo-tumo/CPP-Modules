// ********************************************************************** //
//                                                                        //
//             whatever.hpp                                               //
//             Created: 2022/05/24 15:10:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <typename T>
void swap(T& a, T& b){
	T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& max(const T& a, const T& b){
	return a > b ? a : b;
}

template <typename T>
const T& min(const T& a,const T& b){
	return a < b ? a : b;
}

#endif // EX00_WHATEVER_HPP