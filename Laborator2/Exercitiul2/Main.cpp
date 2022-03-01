#include <iostream>
#include "Students.h"
#include "GlobalFunctions.h"

int main() {
	 

	Students Ioan;
	Ioan.SetName("Ioan Popescu");
	Ioan.SetgradeHistory(5.5);
	Ioan.SetgradeEnglish(8.0);
	Ioan.SetgradeMath(10.0);
	std::cout << Ioan.GetgradeEnglish() << " " << Ioan.AverageGrade()<<" "<< Ioan.GetName() << "\n";
	Students Marian;
	Marian.SetName("Marian Andreevici");
	Marian.SetgradeEnglish(9.0);
	Marian.SetgradeMath(5.5);
	Marian.SetgradeHistory(9.5);
	std::cout << Marian.GetgradeMath() << " " << Marian.AverageGrade() << " " << Marian.GetName() << "\n";
	std::cout << CompareAverageGrade(&Marian, &Ioan) << " " << CompareGradeEnglish(&Marian, &Ioan) << " ";
	std::cout << CompareGradeHistory(&Ioan, &Marian) << " " << CompareGradeMath(&Ioan, &Marian) << " " << CompareName(&Marian, &Ioan);


	return 0;
}