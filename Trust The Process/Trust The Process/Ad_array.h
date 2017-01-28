#pragma once
#include "Safearray.h"
#pragma once

class Ad_array : public Safearray
{
public:
	template <class T>
	void Sqr(T first, T second, T third) {
		int a, b, c;
		a = first*first;
		b = second * second;
		c = third * third;
		std::cout << "Sqr of A: " << a << std::endl;
		std::cout << "Sqr of B: " << b << std::endl;
		std::cout << "Sqe of C: " << c << std::endl;
	}
};

