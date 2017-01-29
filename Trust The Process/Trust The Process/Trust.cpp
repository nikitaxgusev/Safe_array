#include <vector>
#include <iostream>
#include "Safearray.h"
#include "Ad_array.h"






int main() {
	Ad_array<i> s1;
	s1.printVector();
	s1.count_sr();
	std::cout << "Average: " << s1.getSr_ar()<<std::endl;
	s1.Sqr(); 

	std::cout << std::endl;

	Safearray<f> s2;
	s2.printVector();
	s2.count_sr();
	std::cout << "Average: " << s2.getSr_ar() << std::endl;

	if (s1.getSr_ar() > s2.getSr_ar()) {
		std::cout << "1st av. > 2d av. and resut: " << s1.getSr_ar() << std::endl;
	}
	else {
		std::cout << "1st av. < 2d av. and resut: " << s2.getSr_ar() << std::endl;
	}
	

	system("pause");

	return 0;
}