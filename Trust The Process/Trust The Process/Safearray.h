#pragma once

#include <vector>
#include <iostream>




	typedef int i;
 	typedef float f;

	class Safearray
	{
	protected:
	std::vector<i> myVector;
	std::vector <f> myVector1;
	double sr_ar;
	public:
		
		Safearray();
		~Safearray();


		void setElement(i first, i second, i third);
		i getValue(i number);

		 void setElement1(f first, f second, f third);
		 f getValue1(f number);


		 template <class T>
		 void Safearray::count_sr(T first, T second, T third) {
			 sr_ar = (first + second + third) / 3;
		 }

		double getSr_ar();



	};



