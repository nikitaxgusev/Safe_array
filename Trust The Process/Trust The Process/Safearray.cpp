#include "Safearray.h"
#include <vector>
#include <iostream>


typedef int i;
typedef float f;

	Safearray::Safearray()
	{
	}


	Safearray::~Safearray()
	{
	}

	void Safearray::setElement(i first, i second, i third) {
		myVector.insert(myVector.end(), first);
		myVector.insert(myVector.end(), second);
		myVector.insert(myVector.end(), third);
	}
	i Safearray::getValue(i number) {
		int value = myVector[number];
		return value;
	}

	void Safearray::setElement1(f first, f second, f third) {
		myVector1.insert(myVector1.end(), first);
		myVector1.insert(myVector1.end(), second);
		myVector1.insert(myVector1.end(), third);
	}

	f Safearray::getValue1(f number) {
		float value = myVector1[number];
		return value;
	}


	double Safearray::getSr_ar() {
		return sr_ar;
	}