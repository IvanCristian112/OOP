#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Students.h"

bool Students::CheckGrade(float x) {
	if (x >= 1.0f && x <= 10.0f)
		return true;
	else return false;
}

void Students::SetName(const char* nume) {
	strcpy(this->name, nume);
}
char* Students::GetName() {
	return this->name;
}
void Students::SetgradeEnglish(float x) {
	if (CheckGrade(x)) this->gradeEnglish = x;
}

void Students::SetgradeHistory(float x) {
	if (CheckGrade(x)) this->gradeHistory = x;
}

void Students::SetgradeMath(float x) {
	if (CheckGrade(x)) this->gradeMath = x;
}

float Students::GetgradeEnglish() {
	return this->gradeEnglish;
}

float Students::GetgradeHistory() {
	return this->gradeHistory;
}

float Students::GetgradeMath() {
	return this->gradeMath;
}

float Students::AverageGrade() {
	float grade = 0;
	grade = (this->gradeEnglish + this->gradeHistory + this->gradeMath) / 3.0f;
	return grade;
}

