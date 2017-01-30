#pragma once
#include <vector>
#include <iostream>

	typedef int i;
 	typedef float f;

	template <class T>
	class Safearray
	{
	protected:
	std::vector<T> myVector;
	T sr_ar;
	public:	
		Safearray<T>::Safearray()
		{
			int S;
			std::cout << "Enter the SIZE: ";
			std::cin >> S;
			T number;
			for (int i = 0; i < S; i++) {
				std::cout << "Enter a NUMBER for a VECTOR: ";
				std::cin >> number;
				myVector.insert(myVector.end(), number);
				sr_ar += myVector[i];
			}
			sr_ar /= myVector.size();
		std::cout<<std::endl;
		}

		Safearray<T>::~Safearray()
		{
			std::cout << "Exit.." << std::endl;
		}

		void printVector() {
			std::cout <<"Elements: " <<std::endl;
			for (int i = 0; i < myVector.size(); i++){
				std::cout <<" "<<myVector[i];}
			std::cout<<std::endl;
		}

		 T getSr_ar() {
			 return sr_ar;
		 }
	};



