#include "Safearray.h"
#include <vector>
#include <iostream>

//here you can see my changes


typedef int i;
typedef float f;

	Safearray::Safearray()
	{
	}


	Safearray::~Safearray()
	{
	}


	f Safearray::getValue1(f number) {
		float value = myVector1[number];
		return value;
	}

	template <class T>
	void Safearray::count_sr(T first, T second, T third) {
		sr_ar = (first + second + third) / 3;
	}

	double Safearray::getSr_ar() {
		return sr_ar;
	}
	
//here is another comment