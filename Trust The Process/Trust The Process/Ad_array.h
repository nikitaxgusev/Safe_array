#pragma once
#include "Safearray.h"
#pragma once
template <class T>
class Ad_array : public Safearray <T>
{
public:
	void Sqr() {
		std::cout << "Square root:";
		for (int i = 0; i < myVector.size(); i++){
			PrintSqr<T>(myVector[i] * myVector[i]);}
			std::cout << std::endl;
	}

	template <class T>
	void PrintSqr(T Sqr) {
		std::cout <<" "<< Sqr;
	}


};

