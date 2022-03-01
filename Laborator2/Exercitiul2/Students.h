#pragma once

class Students {
private:
	char name[25];
	float gradeMath;
	float gradeEnglish;
	float gradeHistory;
	bool CheckGrade(float x);
public:
	void SetName(const char* name);
	char* GetName();
	void SetgradeMath(float x);
	float GetgradeMath();
	void SetgradeEnglish(float x);
	float GetgradeEnglish();
	void SetgradeHistory(float x);
	float GetgradeHistory();
	float AverageGrade();

};