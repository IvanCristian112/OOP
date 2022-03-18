#include <iostream>
#include "Sort.h"

int main() {
	
	Sort s1;
	Sort s2(5, 5, 15);
	Sort s3(10, 155, 66, 1, 11, 17, 9, 88, 666, 555, 100);
	Sort s4("10,50,30,70");
	s4.Print();
	s4.QuickSort(false);
	s4.Print();

	s2.Print();
	std::cout << s2.GetElementFromIndex(5) << "\n";
	s2.BubbleSort(false);
	s2.Print();
	s3.Print();
	s3.QuickSort(true);
	s3.Print();
	
	std::cout << s2.GetElementsCount() << "\n";
	
	return 0;
}