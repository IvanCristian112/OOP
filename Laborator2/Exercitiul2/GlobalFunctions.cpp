#pragma once
#include "Students.h"
#include "GlobalFunctions.h"
#include <cstring>

int CompareName(Students *s1, Students *s2) {
	return (strcmp(s1->GetName(), s2->GetName()));
}

int CompareGradeEnglish(Students *s1, Students *s2) {
	if (s1->GetgradeEnglish() > s2->GetgradeEnglish()) return 1;
	else if (s1->GetgradeEnglish() < s2->GetgradeEnglish()) return -1;
	else return 0;
}

int CompareGradeHistory(Students *s1, Students *s2) {
	if (s1->GetgradeHistory() > s2->GetgradeHistory()) return 1;
	else if (s1->GetgradeHistory() < s2->GetgradeHistory()) return -1;
	else return 0;
}

int CompareGradeMath(Students *s1, Students *s2) {
	if (s1->GetgradeMath() > s2->GetgradeMath()) return 1;
	else if (s1->GetgradeMath() < s2->GetgradeMath()) return -1;
	else return 0;
}

int CompareAverageGrade(Students *s1, Students *s2) {
	if (s1->AverageGrade() > s2->AverageGrade()) return 1;
	else if (s1->AverageGrade() < s2->AverageGrade()) return -1;
	else return 0;
}


