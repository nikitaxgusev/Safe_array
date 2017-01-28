#include <vector>
#include <iostream>
#include "Safearray.h"
#include "Ad_array.h"






int main() {
	Ad_array s1;
	s1.setElement(3, 4, 5);
	std::cout << "elements " << s1.getValue(0) <<" "<<s1.getValue(1) <<" "<< s1.getValue(2) << std::endl;
	s1.count_sr(s1.getValue(0), s1.getValue(1), s1.getValue(2));
	std::cout << "Sr.arif: " << s1.getSr_ar()<<std::endl;
	s1.Sqr(s1.getValue(0), s1.getValue(1), s1.getValue(2));

	Safearray s2;
	s2.setElement1(3.5, 4.87, 5.09);
	std::cout << "elements " << s2.getValue1(0) << " " << s2.getValue1(1) << " " << s2.getValue1(2) << std::endl;
	s2.count_sr(s2.getValue1(0), s2.getValue1(1), s2.getValue1(2));
	std::cout << "Sr.arif: " << s2.getSr_ar() << std::endl;

	if (s1.getSr_ar() > s2.getSr_ar()) {
		std::cout << "" << s1.getSr_ar() << std::endl;
	}
	else {
		std::cout << "Bigger: " << s2.getSr_ar() << std::endl;
	}
	

	system("pause");

	return 0;
}